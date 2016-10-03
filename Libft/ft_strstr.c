/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/12 10:16:56 by ovisky            #+#    #+#             */
/*   Updated: 2014/08/12 10:16:58 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	char	*needle;
	char 	*haystack;
	char	*haystack_adv;
	char	*haystack_begin;

	if (*to_find == '\0')
		return ((char *) str);
	needle = (char *) to_find;
	haystack = (char *) str;
	haystack_adv = (char *) str;
	while (*++needle)
		haystack_adv++;
	while (*haystack_adv)
	{
		haystack_begin = haystack;
		needle = (char *) to_find;
		while (*haystack && *needle && (*haystack == *needle))
		{
			haystack++;
			needle++;
		}
		if (!*needle)
			return haystack_begin;
		haystack = haystack_begin + 1;
		haystack_adv++;
	}
	return NULL;
}
