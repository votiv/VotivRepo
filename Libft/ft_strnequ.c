/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/11 16:25:10 by ovisky            #+#    #+#             */
/*   Updated: 2015/03/11 16:25:12 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 != NULL && s2 != NULL)
	{
		while (*s1 && *s2 && (n - 1) > 0)
		{
			if (ft_toupper(*s1) != ft_toupper(*s2))
				break ;
			s1++;
			s2++;
			n--;
		}
	}
	return (ft_toupper(*s1) == ft_toupper(*s2));
}
