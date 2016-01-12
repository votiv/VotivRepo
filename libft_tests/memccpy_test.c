#include "libft.h"

int		main()
{
	char	*dest;
	char	*src;
	
	dest = (char *) ft_memalloc(sizeof(*dest) * BUFF_SIZE);
	src = (char *) ft_memalloc(sizeof(*src) * BUFF_SIZE);
	src = "Stuff is gorgious!";
	dest = ft_memccpy(dest, src, 'g', 15);
	printf("the end: %s\n", dest);
	printf("pointer: %c", *dest);
	return 0;
}