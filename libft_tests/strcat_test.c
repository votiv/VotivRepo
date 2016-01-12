#include "libft.h"

int		main()
{
	char	*lol, *src;
//	int		len;
	
	lol = (char *) ft_memalloc(sizeof(*lol) * BUFF_SIZE);
	src = (char *) ft_memalloc(sizeof(*src) * BUFF_SIZE);
	src = "Go home!";
	lol = "You're drunk!";
//	len = 5;
	src = ft_strcat(src, lol);
	printf("%s\n", src);
//	if (ft_memcmp(lol, src, ft_strlen(src)) == 0)
//		printf("OK\n");
//	else
//		printf("%d --- dest string is: %s\n", ft_memcmp(lol, src, ft_strlen(src)), lol);
//	lol = ft_strncpy(lol, src, len);
//	if (ft_memcmp(lol, src, len) == 0)
//		printf("OK");
//	else
//		printf("%d --- dest string is: %s", ft_memcmp(lol, src, ft_strlen(src)), lol);
	return 0;
}