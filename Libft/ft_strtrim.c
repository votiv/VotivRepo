/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/11 16:27:31 by ovisky            #+#    #+#             */
/*   Updated: 2015/03/11 16:27:32 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*ret;
	int		i;
	int		len;

	if (s != NULL)
	{
		ret = (char *)ft_memalloc(sizeof(*s) * ft_strlen(s));
		len = ft_strlen(s) - 1;
		i = 0;
		if (!ft_isspace(s[i]) && !ft_isspace(s[len]))
		{
			ft_strcpy(ret, s);
			return (ret);
		}
		while (ft_isspace(s[i]))
			i++;
		if (s[i] == '\0')
			return ("");
		while (ft_isspace(s[len]))
			len--;
		ret = ft_strsub(s, i, len - (i - 1));
	}
	return (ret);
}
