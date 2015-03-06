#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *s)
{
	int		len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*ret;

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

char	*reverse(char *s)
{
	int		i;
	int		j;
	char	*ret;

	ret = (char *) ft_memalloc(sizeof(*ret) * ft_strlen(s));
	i = 0;
	while (i < ft_strlen(s) - 1)
		i++;
	j = 0;
	while (j < ft_strlen(s))
	{
		ret[j] = s[i];
		j++;
		i--;
	}
	ret[j] = '\0';
	return (ret);
}

int		main()
{
	char	*s, *d;

	s = (char *) ft_memalloc(5);
	s = "   ab c	lol123^";
	printf("Before: %s\n", s);
	d = reverse(s);
	printf("After: %s\n", d);
	return (0);
}