#include "libft.h"

static char	**alloc_tab(const char *s, char c)
{
	int		i;
	int		word_found;
	int		word_number;

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

char		**ft_strsplit(const char *s, char c)
{
	int		i;
	int		i_word;
	int		size_word;
	char	**tab;

	i = 0;
	i_word = 0;
	size_word = 0;
	if (!(tab = alloc_tab(s, c)))
		return (NULL);
	while (i == 0 || (i > 0 && s[i - 1] != '\0'))
	{
		if ((s[i] == '\0' || s[i] == c) && size_word > 0)
		{
			if (!(tab[i_word] = ft_strsub(s, i - size_word, size_word)))
				return (NULL);
			i_word++;
			size_word = 0;
		}
		if (s[i] != c)
			size_word++;
		i++;
	}
	tab[i_word] = 0;
	return (tab);
}