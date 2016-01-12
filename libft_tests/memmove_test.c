#include "libft.h"

int		main()
{
	char	*lol, *src;
	
	lol = (char *) ft_memalloc(sizeof(*lol) * BUFF_SIZE);
	src = (char *) ft_memalloc(sizeof(*src) * BUFF_SIZE);
	src = "Computer go home, ur drunk!";
	lol = ft_memmove(lol, src, ft_strlen(src));
	printf("%s\n", lol);
	return 0;
}