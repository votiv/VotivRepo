/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 10:04:22 by ovisky            #+#    #+#             */
/*   Updated: 2014/11/13 10:04:23 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*ret;

	ret = (char *) s;
	while (*ret != '\0')
	{
		if (*ret == c)
			return (ret);
		ret++;
	}
	return (0);
}
