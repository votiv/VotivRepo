/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 10:52:21 by ovisky            #+#    #+#             */
/*   Updated: 2014/11/13 10:52:21 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	size_t	i;
	int		j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0' && i <= n)
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i] == to_find[j] || to_find[j] != '\0')
				j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}
