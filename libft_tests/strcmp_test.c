#include "libft.h"

int		main()
{
	char	*s1, *s2;
	int		expected, actual;

	s1 = "lol and rofl";
	s2 = "lol and rofl";
	actual = ft_strcmp(s1, s2);
	expected = 0;
	if (actual == expected)
		printf("OK\n");
	else
		printf("ERROR! Expected: %d, actual: %d\n", expected, actual);
	s1 = "lol";
	actual = ft_strncmp(s1, s2, 3);
	expected = 0;
	if (actual == expected)
		printf("OK\n");
	else
		printf("ERROR! Expected: %d, actual: %d\n", expected, actual);
	return 0;
}