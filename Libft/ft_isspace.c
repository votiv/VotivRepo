#include "libft.h"

int		ft_isspace(char c)
{
	return ((c == ' ' || c == '\n' || c == '\t') ? 1 : 0);
}