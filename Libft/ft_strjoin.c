/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/11 16:25:51 by ovisky            #+#    #+#             */
/*   Updated: 2015/03/11 16:25:52 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*ret;

	len = ft_strlen(s1) + ft_strlen(s2);
	ret = (char *)ft_memalloc(sizeof(*s1) * len);
	if (ret == NULL)
		return (NULL);
	i = 0;
	j = 0;
	if (s1 != NULL)
	{
		while (s1[j] != '\0')
		{
			ret[i] = s1[j];
			j++;
			i++;
		}
	}
	if (s2 != NULL)
	{
		j = 0;
		while (s2[j] != '\0')
		{
			ret[i] = s2[j];
			j++;
			i++;
		}
		ret[i] = '\0';
	}
	return (ret);
}
