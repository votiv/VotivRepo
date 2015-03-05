#include "infin.h"

char	*strip_minus(char *s)
{
	int		i;

	i = 0;
	if (s[0] == '-')
	{
		while (s[i] != '\0')
		{
			s[i] = s[i + 1];
			i++;
		}
		s[i] = '\0';
	}
	return (s);
}

int		ft_isdigit(char c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}

void	ft_putstr(char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		write (1, &s[i], 1);
		i++;
	}
}

int		ft_strlen(char	*s)
{
	int		len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

void	*ft_memalloc(size_t size)
{
	char	*ret;
	size_t	i;

	ret = (char *) malloc(size);
	if (ret != NULL)
	{
		i = 0;
		while (i < size)
		{
			ret[i] = 0;
			i++;
		}
	}
	return ((void *)ret);
}

char	*ft_refverse(char **s)
{
	int		i;
	int		len;
	char	*ret;

	printf("reverse: %s\n", *s);
	i = 0;
	len = ft_strlen(*s);
	ret = (char *) ft_memalloc(sizeof(*ret) * (len));
	while (i < len)
	{
		ret[i] = *s[len - 1];
		i++;
		len--;
	}
	ret[i] = '\0';
	printf("reversed: %s\n", ret);
	return (ret);
}

char	*ft_reverse(char **s) 
{
	int		i;
	int		len;
	char 	*begin;
	char	*end;
	char	temp;

	len = ft_strlen(*s);
	begin  = *s;
	end    = *s;
	i = 0;
	while (i < len - 1)
	{
		end++;
		i++;
	}
	i = 0;
	while (i < len / 2)
	{
		temp   = *end;
		*end   = *begin;
		*begin = temp;
		begin++;
		end--;
		i++;
	}
}