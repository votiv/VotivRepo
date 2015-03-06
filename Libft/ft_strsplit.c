#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**ret;
	int		i;
	int		j;
	int		k;

	ret = (char **) ft_memalloc(sizeof(*ret) * (100 + 1));
	if (s[0] == c)
		i = 1;
	else
		i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		j = 0;
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
			k++;
			j = 0;
		}
		ret[k][j] = s[i];
		j++;
	}
	return (ret);
}