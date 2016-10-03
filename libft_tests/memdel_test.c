#include "libft.h"

int		main()
{
	char	*tmp;

	tmp = (char *) ft_memalloc(sizeof(*tmp) * BUFF_SIZE);
	if (tmp == NULL)
	{
		printf("ft_memalloc failed!\n");
		return 0;
	}
	else
		printf("OK\n");
	ft_memdel((void *) &tmp);
	if (tmp != NULL)
		printf("ft_memdel failed!\n");
	else
		printf("OK\n");
	return 0;
}