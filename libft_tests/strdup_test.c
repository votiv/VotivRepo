#include "libft.h"

int		main()
{
	char	*dest, *src;
	
	src = (char *) ft_memalloc(sizeof(*src) * BUFF_SIZE);
	src = "Testing tests with testing tests.";
	dest = ft_strdup(src);
	if (ft_memcmp(dest, src, ft_strlen(src)) == 0)
		printf("OK");
	else
		printf("%d --- duplicated string is: %s\n", ft_memcmp(dest, src, ft_strlen(src)), dest);
	return 0;
}