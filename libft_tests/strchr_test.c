#include "libft.h"

int		main()
{
	char	*tmp, *result;
	int		c;

	tmp = (char *) ft_memalloc(sizeof(*tmp) * BUFF_SIZE);
	tmp = "Shit just got real!";
	c = 'e';
	result = strchr(tmp, c);
	if ((ft_memcmp(ft_strchr(tmp, c), result, ft_strlen(result))) == 0)
		printf("OK\n");
	else
		printf("The result was: %s, but should have been: %s\n", ft_strrchr(tmp, c), result);
	c = 't';
	result = strrchr(tmp, c);
	if ((ft_memcmp(ft_strrchr(tmp, c), result, ft_strlen(result))) == 0)
		printf("OK\n");
	else
		printf("The result was: %s, but should have been: %s\n", ft_strrchr(tmp, c), result);
	return 0;
}