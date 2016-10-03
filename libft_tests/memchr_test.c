#include "libft.h"

int		main()
{
	char	*s1;
	char	*actual, *expected;
	size_t	len;
	
	s1 = (char *) ft_memalloc(sizeof(*s1) * BUFF_SIZE);
	actual = (char *) ft_memalloc(sizeof(*actual) * BUFF_SIZE);
	expected = (char *) ft_memalloc(sizeof(*expected) * BUFF_SIZE);
	s1 = "'Tis a pity she was a whore";
	len = ft_strlen(s1);
	actual = ft_memchr(s1, 'p', len);
	expected = memchr(s1, 'p', len);
	if ((ft_memcmp(expected, actual, len)) == 0)
		printf("OK\n");
	else
		printf("memchr ERROR! Expected: %s, actual: %s\n", expected, actual);
	return 0;
}