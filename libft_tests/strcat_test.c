#include "libft.h"

int		main()
{
	char	s1[] = "Go home!";
	char	s2[] = "Peter ";
	char	*dest;

	dest = (char *) ft_memalloc(sizeof(*dest) * (ft_strlen(s1) + ft_strlen(s2) - 1));
	dest = ft_strcat(s2, s1);
	printf("dest: %s\n", dest);
	return 0;
}
