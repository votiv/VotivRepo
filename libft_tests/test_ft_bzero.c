#include "libft.h"

int		main()
{
	char	*tmp;
	int		len;
	
	len = 100;
	tmp = (char *) ft_memalloc(sizeof(char) * len);
	ft_bzero(tmp, len);
	printf("sizeof: %d", (int) sizeof(tmp));
	return 0;
}