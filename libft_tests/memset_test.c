#include "libft.h"

int		main()
{
	char	*actual, *expected;
	
	actual = (char *) ft_memalloc(sizeof(*actual) * BUFF_SIZE);
	expected = (char *) ft_memalloc(sizeof(*expected) * BUFF_SIZE);
	actual = ft_memset(actual, 'K', 8);
	expected = memset(expected, 'K', 8);
	if (ft_memcmp(actual, expected, 8) == 0)
		printf("OK\n");
	else
		printf("memset ERROR! Expected: %s, actual: %s\n", expected, actual);
	return 0;
}