#include "libft.h"

int		main()
{
	char	*actual, *expected;
	char	*src;
	
	actual = (char *) ft_memalloc(sizeof(*actual) * BUFF_SIZE);
	expected = (char *) ft_memalloc(sizeof(*expected) * BUFF_SIZE);
	src = (char *) ft_memalloc(sizeof(*src) * BUFF_SIZE);
	src = "Stuff is gorgious!";
	actual = ft_memccpy(actual, src, 'g', 15);
	expected = memccpy(actual, src, 'g', 15);
	printf("ft: %s, normal: %s\n", (char *) ft_memccpy(actual, src, 'g', 15), (char *) memccpy(actual, src, 'g', 15));
	if (ft_memcmp(actual, expected, ft_strlen(src)) == 0)
		printf("OK\n");
	else
		printf("memccpy ERROR!\n");
	return 0;
}