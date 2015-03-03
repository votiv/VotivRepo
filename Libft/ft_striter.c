#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	if (s != NULL)
	{
		while (s != '\0')
		{
			f(s);
			s++;
		}
	}
}