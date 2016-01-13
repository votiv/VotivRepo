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

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	char	*needle;
	char 	*haystack;
	char	*partial;

	if (*to_find == '\0')
		return ((char *) str);
	needle = (char *) to_find;
	haystack = (char *) str;
	if (ft_strlen(to_find) <= n)
	{
		return ft_strstr(haystack, needle);
	}
	else
	{
		partial = (char *) ft_memalloc(sizeof(*partial) * (n + 1));
		partial = ft_memcpy(partial, needle, n);
		partial[n] = '\0';
		return ft_strstr(haystack, partial);
	}
	return NULL;
}
