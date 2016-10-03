/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 14:01:32 by ovisky            #+#    #+#             */
/*   Updated: 2015/01/23 15:39:11 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(const char *str)
{
	int		len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strcpy(char *dest, const char *src)
{
	int		i;

	i = 0;
	while ((dest[i] = src[i]) != '\0')
		i++;
	return (dest); 
}

char	*ft_strdup(const char *str)
{
	char	*dest;

	dest = malloc(ft_strlen(str) * sizeof(char) + 1);
	if (dest != NULL)
		ft_strcpy(dest, str);
	return (dest);
}

int		main(void)
{
	const char	*s1;
	char		*s2;

	s1 = "rofl";
	s2 = ft_strdup(s1);
	printf("%s\n", s2);
	return 0;
}
