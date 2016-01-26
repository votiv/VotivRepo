#include "libft.h"

int		main()
{
	char	spacey[] = "   trim		this shit\n";
	char	trimmed[] = "trim		this shit";
	char	*tmp;

	tmp = (char *) ft_memalloc(sizeof(*tmp) * BUFF_SIZE);
	tmp = ft_strtrim(spacey);
	if (ft_strequ(tmp, trimmed))
	{
		printf("OK\n");
	}
	else
	{
		printf("ERROR! Expected: %s, actual: %s\n", trimmed, tmp);
	}
	return 0;
}