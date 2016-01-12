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

int				get_next_line(int fd, char **line) {
	
//	int		i;
	int		ret;
	char	*buff;
	
	if (fd < 0 || !line)
		return (-1);
//	i = 0;
	buff = (void *) malloc(sizeof(*buff) * BUFF_SIZE);
	while ((ret = read(fd, buff, BUFF_SIZE)) != 0) {
		if (!(ft_strchr(buff, '\n'))) {
//			printf("buff --- %s", buff);
			*line = ft_strdup(buff);
		}
	}
	printf("line = %s", *line);
	return 0;
}