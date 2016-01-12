#include "libft.h"

int		main()
{
	char	*lol, *src;
	
	lol = (char *) ft_memalloc(sizeof(*lol) * BUFF_SIZE);
	src = (char *) ft_memalloc(sizeof(*src) * BUFF_SIZE);
	src = "Gina";
	lol = "Gina";
	printf("%d\n", ft_memcmp(src, lol, 5));
	return 0;
}