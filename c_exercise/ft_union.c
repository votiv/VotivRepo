/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uonion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 16:44:35 by ovisky            #+#    #+#             */
/*   Updated: 2015/01/26 16:54:44 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*
char *strcat(char *dest, const char *src)
{
    strcpy(dest + strlen(dest), src);
    return dest;
}*/

int		ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

char	*ft_strcat(char *dest, const char *src)
{
	int		dest_len;
	int		j;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	j = 0;
	while (src[j] != '\0')
		dest[dest_len++] = src[j++];
	dest[dest_len] = '\0';
	return (dest);
}

void	ft_uonion(char *s, char *d)
{
	int		i;
	int		j;
	char	ch;
	char	*tmp;

	tmp = ft_strcat(s, d);
	i = 0;
	while ((ch = tmp[i++]) != '\0')
	{
		//printf("double %c, index %d\n", ch, i-1);
		j = i;
		while (tmp[j] != '\0')
		{
			if (ch == tmp[j])
			{
				printf("%c %s %d\n", ch, "here", i - 1);
				while (tmp[j] != '\0')
				{
					tmp[j] = tmp[j + 1];
					printf("%s\n", tmp);
					j++;
				}
				i--;
				break;
			}
			j++;
		}
		//printf("%d\n", i);
	}
	ft_putstr(tmp);
}

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_uonion(av[1], av[2]);
	}
	write (1, "\n", 1);
	return (0);
}
