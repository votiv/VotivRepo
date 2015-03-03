#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 != NULL && s2 != NULL)
	{
		while (*s1 && *s2 && n > 0)
		{
			if (ft_toupper(*s1) != ft_toupper(*s2))
				break ;
			s1++;
			s2++;
			n--;
		}
	}
	return (ft_toupper(*s1) == ft_toupper(*s2));
}