#include <stdlib.h>

int		ft_strlen(char *s)
{
	int		len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

char	*ft_strcpy(char *d, const char *s)
{
	int		i;

	i = 0;
	while ((d[i] = s[i]) != '\0')
}
