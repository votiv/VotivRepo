#include "libft.h"

void	x_putchar(unsigned int i, char *s);

int		main()
{
	char	*tmp;

	tmp = (char *) ft_memalloc(sizeof(*tmp) * BUFF_SIZE);
	tmp = "LOL ROFLT !23! abc +";
	ft_striter(tmp, ft_putstr);
	printf("\n");

	ft_striteri(tmp, x_putchar);
	printf("%s\n", tmp);
	return 0;
}

void	x_putchar(unsigned int i, char *s)
{
	if (s[i] >= 65 && s[i] <= 90)
	{
		printf("OK\n");
		s[i] += 32;
	}
}
