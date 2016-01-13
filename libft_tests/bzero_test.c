#include "libft.h"

int		main()
{
	char	tmp[5];
	size_t	len, i;
	
	len = 3;
	tmp[0] = 't';
	tmp[1] = 't';
	tmp[2] = 't';
	tmp[3] = 't';
	tmp[4] = 't';
	ft_bzero((char *)tmp, len);
	i = 0;
	while (i < 5)
	{
		printf("Line %d: %c\n", (int) i, tmp[i]);
		i++;
	}
	return 0;
}