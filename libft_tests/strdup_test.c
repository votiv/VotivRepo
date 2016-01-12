#include "libft.h"

int		main()
{
	char	*lol, *src;
	
	src = (char *) ft_memalloc(sizeof(*src) * BUFF_SIZE);
	src = "Testing tests with testing tests.";
	lol = ft_strdup(src);
	if (ft_memcmp(lol, src, ft_strlen(src)) == 0)
		printf("OK");
	else
		printf("%d --- duplicated string is: %s\n", ft_memcmp(lol, src, ft_strlen(src)), lol);
	return 0;
}