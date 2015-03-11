#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (write (fd, &c, 1) != 1)
		write (2, "There was an error writing to the file!", 39);
}
