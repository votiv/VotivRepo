#include "libft.h"
#include <stdio.h>

static void	rotone(char *s)
{
	while (*s != '\0')
	{
		if (*s == 'z' || *s == 'Z')
			ft_putchar(*s - 25);
		else if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
			ft_putchar(*s + 1);
		else
			ft_putchar(*s);
		s++;
	}
}

int		main(void)
{
	void	*s;

	s = "abc";
	ft_striter(s, rotone);
	return (0);
}