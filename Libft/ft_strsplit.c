#include "libft.h"

/*static char	**init_matrix(int len)
{
	int		i;
	char	**ret;

	i = 0;
	ret = (char **) ft_memalloc(sizeof(*ret));
	while (i < len)
	{
		ret[i] = (char *) ft_memalloc(sizeof(*ret) * len);
		i++;
	}
	return (ret);
}*/

static char	**alloc_tab(const char *s, char c)
{
size_t	i;
size_t	word_found;
size_t	word_number;
i = 0;
word_found = 0;
word_number = 0;
if (s == NULL)
return (NULL);
while (s[i] != '\0')
{
if (s[i] == c && word_found == 1)
{
word_number++;
word_found = 0;
}
if (s[i] != c)
word_found = 1;
i++;
}
if (word_found)
word_number++;
return ((char **)malloc(sizeof(char *) * (word_number + 1)));
}

char		**ft_strsplit(char const *s, char c)
{
	char	**ret;
	int		i;
	int		j;
	int		k;
	int		n;

	ret = alloc_tab(s, c);
	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			j = i;
			n = 0;
			while (s[j] != c)
			{
				printf("%c\n", s[j]);
				ret[k][n] = s[j];
				j++;
				n++;
			}
			ret[k][n + 1] = '\0';
			k++;
			printf("N = %d, K = %d\n", n, k);
			i  = i + n;
		}
		i++;
	}
	ret[k] = '\0';
	return (ret);
}