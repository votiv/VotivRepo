#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s != NULL)
	{
		i = 0;
		while (s != '\0')
		{
			f(i, s);
			i++;
			s++;
		}
	}
}