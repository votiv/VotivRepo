#include "libft.h"

int		main()
{
	char	*src;
	char	*actual, *expected;
	
	src = (char *) ft_memalloc(sizeof(*src) * BUFF_SIZE);
	actual = (char *) ft_memalloc(sizeof(*actual) * BUFF_SIZE);
	expected = (char *) ft_memalloc(sizeof(*expected) * BUFF_SIZE);
	src = "Go home!";
	actual = ft_memcpy(actual, src, 8);
	expected = memcpy(expected, src, 8);
	printf("actual: %s\n", actual);
	printf("expected: %s\n", expected);
	if (ft_memcmp(actual, expected, ft_strlen(src)) == 0)
		printf("OK\n");
	else
		printf("memcpy ERROR! Expected: %s, actual: %s\n", expected, actual);
	return 0;
}