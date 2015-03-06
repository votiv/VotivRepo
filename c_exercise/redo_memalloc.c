#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	int		i;
	char	*ret;

	ret = (char *)malloc(size);
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