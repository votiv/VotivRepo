#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*ret;
	size_t	i;

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