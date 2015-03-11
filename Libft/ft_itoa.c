#include "libft.h"

static int num_of_digits(int n)
{
	int		len;

	len = 0;
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char	*ret;
	int		i;
	int		sign;
	int		len;

	sign = 0;
	if (n < 0)
	{
		sign = -1;
		n *= -1;
	}
	else if (n == 0)
		return ("0");
	len = num_of_digits(n);
	ret = (char *)ft_memalloc(sizeof(*ret) * (len + 1));
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (n > 0)
	{
		ret[i] = (n % 10) + 48;
		n /= 10;
		i++;
	}
	if (sign == -1)
		ret[i++] = '-';
	ret[i] = '\0';
	ret = ft_reverse(ret);
	return (ret);
}