#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*ret;
	int		i;

	i = 0;
	ret = malloc(sizeof(char) * size + 1);
	if (ret = NULL)
		return (NULL);
	while (i <= size)
	{
		ret[i] = '\0';
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
