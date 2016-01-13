#include "libft.h"

int		main()
{
	char	*s1, *s2;
	int		actual, expected;
	
	s1 = (char *) ft_memalloc(sizeof(*s1) * BUFF_SIZE);
	s2 = (char *) ft_memalloc(sizeof(*s2) * BUFF_SIZE);
	s2 = "Gi na";
	s1 = "Gina";
	actual = ft_memcmp(s1, s2, 4);
	expected = memcmp(s1, s2, 4);
	if (expected == 0 && actual == 0)
		printf("OK\n");
	else if (expected != 0 && actual != 0)
		printf("OK! Expected: %d, actual: %d\n", expected, actual);
	else
		printf("memcmp ERROR! Expected: %d, actual: %d\n", expected, actual);
	return 0;
}