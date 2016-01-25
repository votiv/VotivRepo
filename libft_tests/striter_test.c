#include "libft.h"

void	x_function(unsigned int i, char *s);
void	y_function(char *s);

int		main()
{
	char	tmp[] = "LOL ROFLT !23! abc +";

	ft_striter(tmp, y_function);
	printf("%s\nafter iter\n", tmp);

	ft_striteri(tmp, x_function);
	printf("%s\n", tmp);
	return 0;
}

void	x_function(unsigned int i, char *s)
{
	if (s[i] >= 97 && s[i] <= 122)
	{
		s[i] -= 32;
	}
}

void	y_function(char *s)
{
	if (*s >= 65 && *s <= 90)
	{
		*s += 32;
	}
}
