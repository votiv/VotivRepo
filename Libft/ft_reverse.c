/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/11 16:24:17 by ovisky            #+#    #+#             */
/*   Updated: 2015/03/11 16:24:20 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_reverse(char *s)
{
	char	*ret;
	int		i;
	int		j;

	ret = (char *)ft_memalloc(sizeof(*ret) * (ft_strlen(s) + 1));
	i = 0;
	while (i < ft_strlen(s) - 1)
		i++;
	j = 0;
	while (j < ft_strlen(s))
	{
		ret[j] = s[i];
		j++;
		i--;
	}
	ret[j] = '\0';
	return (ret);
}
