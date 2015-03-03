#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ret;

	if (s != NULL)
	{
		ret = (char *) ft_memalloc(sizeof(*s) * ft_strlen(s));
		i = 0;
		while (i < (unsigned int) ft_strlen(s))
		{
			ret[i] = f(i, s[i]);
			i++;
		}
	}
	return (ret);
}