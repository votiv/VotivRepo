/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/03 12:21:03 by ovisky            #+#    #+#             */
/*   Updated: 2014/12/03 12:21:14 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_buffinit(char **buff, int *i)
{
	(*buff) = (char*)malloc(BUFF_SIZE + 1);
	(*buff)[BUFF_SIZE] = 0;
	*i = 0;
}

int		ft_readinitbuff(int fd, char **buff, int *i)
{
	int		n;

	n = read(fd, *buff, BUFF_SIZE);
	if (n == 0)
		free(*buff);
	else
		(*buff)[n] = 0;
	*i = 0;
	return (n);
}

void	ft_lineinit(int *j, char **line)
{
	(*line) = malloc(5001);
	(**line) = 0;
	(*line)[5001] = 0;
	*j = 0;
}

int		get_next_line(int const fd, char **line)
{
	static char		*buff;
	static int		i;
	int				j;

	if (fd < 0)
		return (-1);
	ft_lineinit(&j, line);
	if (buff == 0)
		ft_buffinit(&buff, &i);
	while (1)
		if (buff[i] == 0)
		{
			if (ft_readinitbuff(fd, &buff, &i) == 0)
				return (0);
		}
		else if (buff[i] == '\n')
		{
			(*line)[j] = 0;
			i++;
			return (1);
		}
		else
			(*line)[j++] = buff[i++];
	return (-1);
}
