/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 10:18:34 by ovisky            #+#    #+#             */
/*   Updated: 2014/11/27 10:18:36 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_putnbr(int nb)
{
	char	*istr;

	istr = malloc(8*sizeof(int));
	ft_putstr(ft_itoa(nb, istr, 10));
}
