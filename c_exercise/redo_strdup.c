#include <stdlib.h>
#include <stdio.h>

static int	ft_strlen(char *s)
{
	int		len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

static void	*ft_memalloc(size_t size)
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

static char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*ret;

	len = ft_strlen(src);
	ret = (char *) ft_memalloc(sizeof(*ret) * (len + 1));
	i = 0;
	while ((ret[i] = src[i]) != '\0')
		i++;
	return (ret);
}

int		main()
{
	char	*s;
	char	*d;

	s = (char *) ft_memalloc(15);
	s = "rofl";
	d = ft_strdup(s);
	printf("%s\n", d);
	return (0);
}
