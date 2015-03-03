#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*ret;

	if (s != NULL)
	{
		ret = (char *)ft_memalloc(sizeof(*s) * ft_strlen(s));
		if (ret == NULL)
			return (NULL);
		while (*s)
		{
			ret[i] = f(s[i]);
			i++;
		}
	}
	ret[i] = '\0';
	return (ret);
}