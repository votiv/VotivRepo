/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/11 16:15:46 by ovisky            #+#    #+#             */
/*   Updated: 2015/03/11 16:15:49 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_of_digits(int n)
{
	int		len;

	len = 0;
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	*finish_ret(int sign, char *ret, int i)
{
	if (sign == -1)
		ret[i++] = '-';
	ret[i] = '\0';
	ret = ft_reverse(ret);
	return (ret);
}

static int	check_num(int n, int *sign, char **ret)
{
	if (n == 0)
		*ret = "0";
	else if (n == -2147483648)
		*ret = "-2147483648";
	else if (n < 0)
	{
		*sign = -1;
		n *= -1;
	}
	else
		*sign = 0;
	return (n);
}

char		*ft_itoa(int n)
{
	char	*ret;
	int		i;
	int		sign;
	int		len;

	len = num_of_digits(n);
	ret = (char *)ft_memalloc(sizeof(*ret) * (len + 1));
	n = check_num(n, &sign, &ret);
	if (ft_strlen(ret) != 0)
		return (ret);
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (n > 0)
	{
		ret[i] = (n % 10) + 48;
		n /= 10;
		i++;
	}
	ret = finish_ret(sign, ret, i);
	return (ret);
}
