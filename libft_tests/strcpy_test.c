#include "libft.h"

int		main()
{
	char	*dest, *src;
	int		len;
	
	dest = (char *) ft_memalloc(sizeof(*dest) * BUFF_SIZE);
	src = (char *) ft_memalloc(sizeof(*src) * BUFF_SIZE);
	src = "Go home!";
	len = 5;
	dest = ft_strcpy(dest, src);
	if (ft_memcmp(dest, src, ft_strlen(src)) == 0)
		printf("OK\n");
	else
		printf("%d --- copied string is: %s\n", ft_memcmp(dest, src, ft_strlen(src)), dest);
	dest = ft_strncpy(dest, src, len);
	if (ft_memcmp(dest, src, len) == 0)
		printf("OK");
	else
		printf("%d --- copied string is: %s", ft_memcmp(dest, src, ft_strlen(src)), dest);
	return 0;
}