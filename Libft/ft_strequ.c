#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 != NULL && s2 != NULL)
	{
		while (*s1 && *s2)
		{
			if (ft_toupper(*s1) != ft_toupper(*s2))
				break ;
			s1++;
			s2++;
		}
	}
	return (ft_toupper(*s1) == ft_toupper(*s2));
}