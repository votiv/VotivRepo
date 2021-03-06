/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/11 16:22:36 by ovisky            #+#    #+#             */
/*   Updated: 2015/03/11 16:22:36 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int n)
{
	int		len;

	len = 0;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

void		ft_putnbr_fd(int n, int fd)
{
	char	*s;

	s = (char *)ft_memalloc(sizeof(*s) * (num_len(n) + 1));
	if (s == NULL)
		return ;
	s = ft_itoa(n);
	while (*s != '\0')
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}
