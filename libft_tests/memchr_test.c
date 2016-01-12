#include "libft.h"

int		main()
{
	char	*lol;
	
	lol = (char *) ft_memalloc(sizeof(*lol) * BUFF_SIZE);
	lol = "'Tis a pity she was a whore";
	lol = ft_memchr(lol, 'p', ft_strlen(lol));
	printf("%s\n", lol);
	return 0;
}