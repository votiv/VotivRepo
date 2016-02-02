/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 16:22:23 by ovisky            #+#    #+#             */
/*   Updated: 2016/01/06 16:22:24 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void			append_line(char **str, char **s_str)
{
	char	*tmp1;
	char	*tmp2;

	tmp2 = NULL;
	tmp1 = NULL;
	if (*str && **str)
	{
		tmp1 = ft_strdup(*str);
		if (*s_str)
		{
			tmp2 = ft_strdup(*s_str);
			free(*s_str);
		}
		*s_str = ft_strjoin(tmp2, tmp1);
		if (tmp2)
			free(tmp2);
		if (tmp1)
			free(tmp1);
	}
}

static unsigned int	check_line(char *s_str)
{
	unsigned int i;

	i = 0;
	while (s_str[i] != '\0')
	{
		if (s_str[i] == '\n')
		{
			s_str[i] = '\0';
			return (i + 1);
		}
		i++;
	}
	return (i);
}

static int			return_line(char **str, char **s_str, char **line)
{
	unsigned int	i;
	char			*tmp;

	tmp = NULL;
	i = check_line(*s_str);
	*line = ft_strdup(*s_str);
	tmp = ft_strdup(*s_str + i);
	free(*s_str);
	*s_str = tmp;
	if (str)
		free(*str), *str = NULL;
	return (1);
}

int					get_next_line(int fd, char **line)
{	
	int			ret;
	char		*tmp;
	static char	*s_tmp;

	tmp = NULL;
	s_tmp = NULL;
	if (fd <= 0 || (!(line)))
		return (-1);
	if ((!(tmp = (char *) ft_memalloc(sizeof(*tmp) * BUFF_SIZE))))
		return (-1);
	while (((ret = read(fd, tmp, BUFF_SIZE)) > 0) && (!(ft_strchr(tmp, '\n'))))
	{
		tmp[ret] = '\0';
		append_line(&tmp, &s_tmp);
	}
	if (tmp && *tmp && ret > 0)
	{
		tmp[ret] = '\0';
		append_line(&tmp, &s_tmp);
	}
	if (ret < 0)
		return (-1);
	if (s_tmp && s_tmp[0] != '\0')
		return (return_line(&tmp, &s_tmp, line));
	if (tmp)
		free(tmp), tmp = NULL;
	free(s_tmp);
	s_tmp = NULL;
	*line = NULL;
	return 0;
}