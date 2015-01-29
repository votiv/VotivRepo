/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/04 13:16:41 by ovisky            #+#    #+#             */
/*   Updated: 2014/12/04 13:16:44 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	unsigned char	*mem;
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (NULL);
	mem = (unsigned char *)malloc(sizeof(unsigned char) * size);
	if (mem)
	{
		while (i < size)
		{
			mem[i] = '\0';
			i++;
		}
		mem[i] = '\0';
		return (mem);
	}
	return (NULL);
}
