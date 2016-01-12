/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/13 17:03:09 by ovisky            #+#    #+#             */
/*   Updated: 2014/08/13 17:03:09 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while ((dest[i++] = src[j++]) != '\0')
		;
	printf("%d\n", (int) i);
	//dest[i + j] = '\0';
	return dest;
}
