#include "libft.h"

char	*ft_reverse(char *s)
{
	char	*ret;
	int		i;
	int		j;

	printf("%s\n", s);
	ret = (char *)ft_memalloc(sizeof(*ret) * ft_strlen(s));
	while (i < ft_strlen(s) - 1)
		i++;
	j = 0;
	while (i != 0)
	{
		ret[j] = s[i];
		j++;
		i--;
	}
	ret[j] = '\0';
	printf("%s\n", ret);
	return (ret);
}