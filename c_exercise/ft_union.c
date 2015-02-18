/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uonion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 16:44:35 by ovisky            #+#    #+#             */
/*   Updated: 2015/02/11 17:08:19 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
		j = i;
		while (tmp[j] != '\0')
		{
			if (ch == tmp[j])
			{
				while (tmp[j] != '\0')
				{
					tmp[j] = tmp[j + 1];		
					j++;
				}
				i--;
				break;
			}
			j++;
		}	
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
