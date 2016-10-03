/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/11 16:27:24 by ovisky            #+#    #+#             */
/*   Updated: 2015/03/11 16:27:24 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*ret;

	if (s != NULL)
	{
		ret = (char *)ft_memalloc(sizeof(*s) * (len + 1));
		if (ret == NULL)
			return (NULL);
		i = 0;
		while (len > 0)
		{
			ret[i] = s[start];
			i++;
			start++;
			len--;
		}
		ret[i] = '\0';
	}
	return (ret);
}
