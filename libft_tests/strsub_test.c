#include "libft.h"

int		main()
{
	char	tmp[] = "Bai Cristiiiii!";
	char	expected[] = "iiiii";
	char	expected2[] = "Bai Cristiiiii!iiiii";
	char	*sub;
	char	*join;

	sub = (char *) ft_memalloc(sizeof(*sub) * BUFF_SIZE);
	sub = ft_strsub(tmp, 9, 5);
	if (!ft_strequ(sub, expected))
	{
		printf("ERROR! Expected: %s, actual: %s\n", expected, sub);
	}
	else
	{
		printf("OK\n");
	}
	join = (char *) ft_memalloc(sizeof(*join) * BUFF_SIZE);
	join = ft_strjoin(tmp, sub);
	if (!ft_strequ(join, expected2))
	{
		printf("ERROR! Expected: %s, actual: %s\n", expected2, join);
	}
	else
	{
		printf("OK\n");
	}
	return 0;
}