#include "libft.h"

static char	**init_matrix(int len)
{
	int		i;
	char	**ret;

	i = 0;
	ret = (char **) ft_memalloc(sizeof(*ret) * (len));
	while (i < len)
	{
		ret[i] = (char *) ft_memalloc(sizeof(*ret) * len);
		i++;
	}
	return (ret);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**ret;
	int		i;
	int		j;
	int		k;
	int		n;

	ret = init_matrix(ft_strlen(s));
	i = 0;
	k = -1;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			k++;
			j = i;
			n = 0;
			while (s[j] != c)
			{
				ret[k][n] = s[j];
				j++;
				n++;
			}
			ret[k][n] = '\0';
			i += j;
		}
		i++;
	}
	ret[k] = '\0';
	return (ret);
}