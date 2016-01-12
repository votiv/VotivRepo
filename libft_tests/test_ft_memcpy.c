#include "libft.h"

int		main()
{
	char	*tmp;
	char	*lol;
	
	tmp = (char *) ft_memalloc(sizeof(*tmp) * BUFF_SIZE);
	lol = (char *) ft_memalloc(sizeof(*lol) * BUFF_SIZE);
	tmp = "lol is lol na na na nana!";
	printf("tmo:   %s\n", tmp);
	lol = ft_memcpy(lol, tmp, (sizeof(*tmp) * ft_strlen(tmp)));
	printf("lol:   %s\n", lol);
	free(lol);
	return 0;
}