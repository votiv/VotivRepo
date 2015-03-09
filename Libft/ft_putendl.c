#include "libft.h"

void	ft_putendl(const char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		write (1, &s[i], 1);
		i++;
	}
	write (1, "\n", 1);
}