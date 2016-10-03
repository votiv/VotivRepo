#include "libft.h"

int		main()
{
	char	*needle, *haystack, *expected, *actual;

	needle = "e ha";
	haystack = "Finding the needle in the haystack!";
	actual = ft_strstr(haystack, needle);
	expected = strstr(haystack, needle);
	if ((ft_memcmp(actual, expected, ft_strlen(expected))) == 0)
		printf("OK\n");
	else
		printf("ERROR! Expected: %s, actual: %s\n", expected, actual);
	needle = "e lol";
	actual = ft_strnstr(haystack, needle, 2);
	expected = "e needle in the haystack!";
	if ((ft_memcmp(actual, expected, ft_strlen(expected))) == 0)
		printf("OK\n");
	else
		printf("ERROR! Expected: %s, actual: %s\n", expected, actual);
	return 0;
}
