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
	int		i;
	int		len;
	char	*ret;

	len = ft_strlen(src);
	ret = (char *) ft_memalloc(sizeof(*ret) * (len + 1));
	i = 0;
	while ((ret[i] = src[i]) != '\0')
		i++;
	return (ret);
}
