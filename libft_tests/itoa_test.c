#include "libft.h"

int		main()
{
	char	*number;
	int		n;

	number = (char *) ft_memalloc(sizeof(*number) * BUFF_SIZE);
	n = -21474836;
	number = ft_itoa(n);
	if (ft_strequ(number, "-21474836"))
	{
		printf("OK\n");
	}
	else
	{
		printf("ERROR! Expected: -21474836, actual: %s\n", number);
	}
	return 0;
}