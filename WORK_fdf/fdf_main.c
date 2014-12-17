/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/06 12:00:24 by ovisky            #+#    #+#             */
/*   Updated: 2014/12/06 12:00:26 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		ft_abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

int		ft_errors(int fd, int ac, char *av)
{
	if (ac == 1)
	{
		ft_putendl("Usage: ./fdf file1");
		return (-1);
	}
	if (!(fd = open(av, O_RDONLY)))
	{
		perror(": error");//ft_strjoin(name, ": "));
		return (-1);
	}
	return (0);
}

int		read_file(int ac, char *av, int matrix[100][100])
{
	int			fd;
	int			i;
	int			j;
	//int			matrix[100][100];
	char		**tmp;
	char		*line;

	fd = open(av, O_RDONLY);
	if (ft_errors(fd, ac, av) != 0)
		return (0);	
	i = 0;
	//matrix = (int**)ft_memalloc(sizeof(int) * 100 * 100);
	while ((get_next_line(fd, &line)) > 0)
	{
		tmp = ft_strsplit(line, 32);
		j = 0;
		while (tmp[j] != 0)
		{
			matrix[i][j] = ft_atoi(tmp[j]);
			j++;
		}
		i++;
		free(line);
	}
	close(fd);
	return (i);
}

int		key_hook(int keycode, t_env *e)
{
	if (keycode == 65307)
		exit (0);
	return (0);
}

void	init_point(t_point *p)
{
	p->x = X_START;
	p->y = Y_START;
	p->z = 0;	
}

void	draw_line2(int x0, int y0, int x1, int y1, void *mlx, void *win)
{
	int		dx;
	int		sx;
	int		dy;
	int		sy;
	int		err;
	int		e2;

	dx = abs(x1 - x0);
	sx = x0 < x1 ? 1 : -1;
	dy = abs(y1-y0);
	sy = y0 < y1 ? 1 : -1;
	err = (dx>dy ? dx : -dy)/2;
	while (1)
	{
		mlx_pixel_put(mlx, win, x0, y0, 0xFF0000);
		if (x0==x1 && y0==y1)
			break;
		e2 = err;
		if (e2 >-dx)
		{
			err -= dy;
			x0 += sx;
		}
		if (e2 < dy)
		{
			err += dx;
			y0 += sy;
		}
	}
}

void	draw_map(int len, t_env env, int matrix[100][100])
{
	t_point	p1;
	t_point	p2;
	t_point	p3;
	int		i;
	int		j;

	i = 0;
	//j = 0;
	
	while (i < len)
	{
		j = 0;
		p1.z = matrix[i][j];
		/*p1.x = 0.51 * 50 - 0.51 * (j + 50);
		p1.y = -p1.z + 0.51 / 2 * 50 + 0.51 / 2 * (j + 50);*/
		p1.x = X_START;
		p1.y = Y_START;
		//p1.x += 100;
		//p1.y += 100;
		while (j < 2)
		{				
				printf("%d %d\n", p1.x,p1.y);
				p2.z = matrix[i][j + 1];
				p2.x = 0.51 * (j + 51) - 0.51 * (i + 50);
				p2.y = -p2.z + 0.51 / 2 * (j + 51) + 0.51 / 2 * (i + 50);
				p2.x += 100;
				p2.y += 100;
				printf("%d %d\n", p2.x,p2.y);
				draw_line2(p1.x, p1.y, p2.x, p2.y, env.mlx, env.win);
				getchar();
				p3.z = matrix[i + 1][j];
				p3.x = 0.51 * (j + 50) - 0.51 * (i + 50);
				p3.y = -p3.z + 0.51 / 2 * (j + 50) + 0.51 / 2 * (i + 50);
				p3.x += 100;
				p3.y += 100;
				draw_line2(p1.x, p1.y, p3.x, p3.y, env.mlx, env.win);
				p1 = p2;
				getchar();
				j++;
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	int		matrix[100][100];
	int		fd,j;
	t_env	env;
	t_point	point;

	fd = read_file(ac, av[1], matrix);
	env.mlx = mlx_init();
	env.win = mlx_new_window(env.mlx, 320, 200, "FDF Window");
	init_point(&point);
	draw_map(fd, env, matrix);
	mlx_key_hook(env.win, key_hook, &env);
	mlx_loop(env.mlx);
	return (0);
}
