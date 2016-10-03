#include "libft.h"

int		main()
{
	char	*tmp;

	tmp = (char *) ft_strnew(sizeof(*tmp) * BUFF_SIZE);
	if (tmp == NULL)
	{
		printf("ft_strnew failed!\n");
		return 0;
	}
	else
		printf("OK\n");
	ft_strdel((void *) &tmp);
	if (tmp != NULL)
		printf("ft_strdel failed!\n");
	else
		printf("OK\n");
	return 0;
}