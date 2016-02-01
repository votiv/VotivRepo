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

int		get_next_line(int fd, char **line)
{	
	int		ret;
	char	*tmp;

	tmp = (char *) ft_memalloc(sizeof(*tmp) * BUFF_SIZE);
	ret = read(fd, *line, 8);
	if (ret != -1)
	{
		tmp = ft_strcat(tmp, *line);
	}
	while ((ret = read(fd, *line, 1)) != -1)
	{
		if (**line != '\n' || **line != '\0')
		{
			tmp = ft_strjoin(tmp, *line);
		}
	}
	printf("line: %s, ret: %d\n", tmp, ret);
	return 0;
}