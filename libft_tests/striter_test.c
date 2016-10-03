#include "libft.h"

void	x_function(unsigned int i, char *s);
void	y_function(char *s);
char	z_function(char c);
char	w_function(unsigned int i, char c);

int		main()
{
	char		iter_tmp[] = "LOL ROFLT !23! abc +";
	const char	map_tmp[] = "+- go HOME you DRUNK!";
	char		*map;

	map = (char *) ft_memalloc(sizeof(*map) * BUFF_SIZE);

	ft_striter(iter_tmp, y_function);
	printf("iter: %s\nafter iter\n", iter_tmp);

	ft_striteri(iter_tmp, x_function);
	printf("iteri: %s\nafter iteri\n", iter_tmp);

	map = ft_strmap(map_tmp, z_function);
	printf("map: %s\nmap_tmp: %s\nafter map\n", map, map_tmp);

	map = ft_strmapi(map_tmp, w_function);
	printf("mapi: %s\nmap_tmp: %s\n", map, map_tmp);
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

char	w_function(unsigned int i, char c)
{
	(void) i;
	if (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	return c;
}

char	z_function(char c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
	}
	return c;
}
