#include "libft.h"

int		main()
{
	char	split[] = "*this***is***sparta*";
	char	**tab;
	int		i, len;

	tab = (char **) ft_memalloc(sizeof(**tab) * BUFF_SIZE);
	tab = ft_strsplit(split, '*');
	i = 0;
	len = 0;
	while (tab[len] != '\0')
	{
		len++;
	}
	while (i < len)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return 0;
}