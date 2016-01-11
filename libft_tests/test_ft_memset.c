#include "libft.h"

int		main()
{
	char	*tmp;
	int		len;
	
	len = 8;
	tmp = (char *) ft_memalloc(sizeof(*tmp) * len);
	tmp = ft_memset(tmp, 'K', len);
	printf("string: %s \n", tmp);
	return 0;
}