/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/11 16:24:58 by ovisky            #+#    #+#             */
/*   Updated: 2015/03/11 16:25:01 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 != NULL && s2 != NULL)
	{
		while (*s1 && *s2)
		{
			if (ft_toupper(*s1) != ft_toupper(*s2))
				break ;
			s1++;
			s2++;
		}
	}
	return (ft_toupper(*s1) == ft_toupper(*s2));
}
