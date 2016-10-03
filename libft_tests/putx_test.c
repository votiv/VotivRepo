#include "libft.h"

int		main()
{
	char	c = 'x';
	int		nbr = 1000;
	char	str[] = "Print me!";
	int		fd;

	ft_putchar(c);
	ft_putnbr(nbr);
	ft_putstr(str);
	ft_putendl(str);
	ft_putchar(c);

	fd = open("test_putx-fd.txt", O_WRONLY);
	printf("fd: %d\n", fd);
	if (fd != 0)
	{
		ft_putchar_fd(c, fd);
		ft_putnbr_fd(nbr, fd);
		ft_putstr_fd(str, fd);
		ft_putendl_fd(str, fd);
		ft_putchar_fd(c, fd);
	}
	return 0;
}