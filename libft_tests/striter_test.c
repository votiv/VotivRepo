#include "libft.h"

void	x_putchar(unsigned int i, char *s);

int		main()
{
	char	*tmp;
	int		i;

	tmp = (char *) ft_memalloc(sizeof(*tmp) * BUFF_SIZE);
	tmp = "LOL ROFLT !23! abc +";
	//ft_striter(tmp, ft_putstr);
	//printf("\n");

	while (i < (int) ft_strlen(tmp))
	{
		ft_striteri(tmp, x_putchar);
		i++;
	}
	printf("here %s\n", tmp);
	return 0;
}

void	x_putchar(unsigned int i, char *s)
{
	char	*tmp;

	tmp = (char *) ft_memalloc(sizeof(*tmp) * BUFF_SIZE);
	*tmp = *s;
	if (tmp[i] >= 65 && tmp[i] <= 90)
	{
		tmp[i] += 32;
	}
}
