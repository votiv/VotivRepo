/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 08:38:21 by ovisky            #+#    #+#             */
/*   Updated: 2014/11/13 08:38:22 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int n)
{
	int		dest_len;
	int		j;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	j = 0;
	while (j != n)
		dest[dest_len++] = src[j++];
	dest[dest_len] = '\0';
	return (dest);
}
