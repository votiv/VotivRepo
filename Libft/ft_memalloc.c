/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/11 16:18:04 by ovisky            #+#    #+#             */
/*   Updated: 2015/03/11 16:18:05 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*ret;
	size_t	i;

	ret = (char *)malloc(size);
	if (ret != NULL)
	{
		i = 0;
		while (i < size)
		{
			ret[i] = 0;
			i++;
		}
	}
	return ((void *)ret);
}
