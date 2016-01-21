#include "libft.h"

int		main()
{
	char	*tmp = 0;

	//tmp = (char *) ft_memalloc(sizeof(*tmp) * BUFF_SIZE);
	tmp = "Be cleared heathen!";
	ft_strclr(tmp);
	if (tmp == NULL)
		printf("ERROR! At this point the string shouldn't be NULL!\n");
	else
		printf("OK\n");
	return 0;
}