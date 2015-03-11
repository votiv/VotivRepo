#include "libft.h"

int		ft_atoi(const char *s)
{
	int		sign;
	int		i;
	int		ret;
	int		mult;
	char	*d;

	d = ft_strdup(s);
	sign = 1;
	if (d[0] == '-')
		sign = -1;
	mult = 1;
	ret = 0;
	i = 0;
	d = ft_reverse(d);
	while (ft_isdigit(d[i]))
	{
		ret = ret + (d[i] - 48) * mult;
		mult *= 10;
		i++;
	}
	return (sign * ret);
}