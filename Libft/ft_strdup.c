/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/14 08:32:25 by ovisky            #+#    #+#             */
/*   Updated: 2014/08/14 08:32:27 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*result;

	result = (char *)malloc(ft_strlen(src) + 1);
	if (result == (char *)0)
	{
		return ((char *)0);
	}
	ft_strcpy(result, src);
	return (result);
}
