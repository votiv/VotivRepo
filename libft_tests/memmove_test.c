#include "libft.h"

int		main()
{
	char	*s1;
	char	*actual, *expected;
	size_t	len;
	
	s1 = (char *) ft_memalloc(sizeof(*s1) * BUFF_SIZE);
	actual = (char *) ft_memalloc(sizeof(*actual) * BUFF_SIZE);
	expected = (char *) ft_memalloc(sizeof(*expected) * BUFF_SIZE);
	s1 = "Computer go home, ur drunk!";
	len = ft_strlen(s1);
	actual = ft_memmove(actual, s1, len);
	expected = memmove(expected, s1, len);
	if ((ft_memcmp(actual, expected, len)) == 0)
		printf("OK\n");
	else
		printf("memmove ERROR! Expected: %s, actual: %s\n", expected, actual);
	return 0;
}