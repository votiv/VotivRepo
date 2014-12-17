/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 10:33:15 by ovisky            #+#    #+#             */
/*   Updated: 2014/11/27 10:33:16 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_itoa(int num, char *str, int base)
{
	int		i;
	int		is_neg;
	int		rem;

	i = 0;
	is_neg = 1;
	if (num == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}
	if (num < 0 && base == 10)
	{
		is_neg = -1;
		num *= is_neg;
	}
	while (num != 0)
	{
		rem = num % base;
		str[i++] = (rem > 9)? (rem-10) + 'a' : rem + '0';
		num /= base;
	}
	if (is_neg == -1)
		str[i++] = '-';
	str[i] = '\0';
	//reverse?
	return (str);
}
