#include "libft.h"

int		main()
{
	char	*tmp;
	
	tmp = (char *) ft_memalloc(sizeof(*tmp) * BUFF_SIZE);
	tmp = ft_memset(tmp, 'K', 8);
	printf("string: %s \n", tmp);
	return 0;
}