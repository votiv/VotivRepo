#include "libft.h"

void	ft_putnbr(int n)
{
	int		i;
	char	*ret;

	ret = (char *)ft_memalloc(sizeof(*ret));
	if (n < 0)
	{
		write (1, "-", 1);
		n *= -1;
	}
	i = 0;
	while (len > 0)
	{
		ret[i] = (n % 10) + 48;
		n /= 10;
		i++;
		len--;
	}
	ret[i] = '\0';
	printf("%s\n", ret);
	ft_reverse(ret);
	printf("%s\n", "itt");
	ft_putstr(ret);
}