/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/11 16:26:56 by ovisky            #+#    #+#             */
/*   Updated: 2015/03/11 16:26:57 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ret;

	if (s != NULL)
	{
		ret = (char *)ft_memalloc(sizeof(*s) * ft_strlen(s));
		if (ret == NULL)
			return NULL;
		i = 0;
		while (s[i] != '\0')
		{
			ret[i] = f(i, s[i]);
			i++;
		}
	}
	ret[i] = '\0';
	return (ret);
}
