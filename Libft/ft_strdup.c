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

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		len;
	void	*ret;

	len = ft_strlen(src) + 1;
	ret = (char *)ft_memalloc(sizeof(ret) * len);
	if (ret == NULL)
		return NULL;
	return (char *) ft_memcpy(ret, src, len);
}
