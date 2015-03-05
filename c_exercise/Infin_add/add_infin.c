#include "infin.h"

static char	*to_string(int *sum, int len)
{
	int		i;
	int		j;
	char	*ret;
	char	*tmp;

	i = 0;
	ret = (char *)ft_memalloc(sizeof(*ret) * len);
	while (i < len)
	{
		ret[i] = sum[i] + 48;
		i++;
	}
	ret[i] = '\0';
	ft_reverse(&ret);
	i = 0;
	while (ret[i] == 48)
		i++;
	j = 0;
	tmp = (char *)ft_memalloc(sizeof(*tmp) * len);
	while (ret[i] != '\0')
	{
		tmp[j] = ret[i];
		j++;
		i++;
	}
	tmp[j] = '\0';
	return (tmp);
}

static void	print_sum(char *sum, int sign)
{
	int		i;

	if (sum[0] == '\0')
	{
		ft_putstr("0\n");
		return ;
	}
	i = 0;
	if (sign == 1 || sign == -1 || sign == -3)
		ft_putstr("-");
	while (sum[i] != '\0')
	{
		write (1, &sum[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

static void	init_arrays(int n1[], int n2[], char *num1, char *num2, int len)
{
	int		i;

	ft_reverse(&num1);
	ft_reverse(&num2);
	i = 0;
	while (num1[i] != '\0')
	{
		n1[i] = num1[i] - 48;
		i++;
	}
	i = 0;
	while (num2[i] !='\0')
	{
		n2[i] = num2[i] - 48;
		i++;
	}
	if (ft_strlen(num1) < ft_strlen(num2))
	{
		i = ft_strlen(num1);
		while (i < ft_strlen(num2))
		{
			n1[i] = 0;
			i++;
		}
	}
	else
	{
		i = ft_strlen(num2);
		while (i < ft_strlen(num1))
		{
			n2[i] = 0;
			i++;
		}
	}
}

static char	*ft_add(char *num1, char *num2, int len)
{
	int		i;
	int		ten;
	int		n1[9999];
	int		n2[9999];
	int		*sum;

	init_arrays(n1, n2, num1, num2, len);
	sum = (int *)ft_memalloc(sizeof(*sum) * (len + 1));
	i = 0;
	ten = 0;
	while (i < len)
	{
		if ((n1[i] + n2[i]) > 9)
		{
			sum[i] = (n1[i] + n2[i]) % 10 + ten;
			ten = (n1[i] + n2[i]) / 10;
		}
		else
		{
			sum[i] = n1[i] + n2[i] + ten;
			ten = 0;
		}
		i++;
	}
	if (ten != 0)
		sum[i] = ten;
	return (to_string(sum, len));
}

static char	*ft_sub(char *num1, char *num2, int len)
{
	int		i;
	int		ten;
	int		n1[9999];
	int		n2[9999];
	int		*sum;

	init_arrays(n1, n2, num1, num2, len);
	sum = (int *)ft_memalloc(sizeof(*sum) * (len + 1));
	i = 0;
	ten = 0;
	while (i < len)
	{
		sum[i] += ten;
		if ((n1[i] - n2[i]) < 0)
		{
			sum[i] = (-1) * (n1[i] - n2[i]);
			ten = -1;
		}
		else
		{
			sum[i] = n1[i] - n2[i];
			ten = 0;
		}
		i++;
	}
	return (to_string(sum, len));
}

static void	determine_sign(char *s, char *d, int *sign)
{
	if (s[0] == '-' && d[0] == '-')
		*sign = 1;
	else if (s[0] == '-' && ft_isdigit(d[0]))
		*sign =  ((ft_strlen(strip_minus(s)) >= ft_strlen(d)) ? -1 : -2);
	else if (ft_isdigit(s[0]) && d[0] == '-')
		*sign = ((ft_strlen(strip_minus(d)) >= ft_strlen(s)) ? -3 : -4);
	else
		*sign = 0;
}

int			main(int ac, char **av)
{
	int		len;
	int		sign;
	char	*sum;
	char	*num1;
	char	*num2;

	determine_sign(av[1], av[2], &sign);
	num1 = strip_minus(av[1]);
	num2 = strip_minus(av[2]);
	len = ((ft_strlen(num1) > ft_strlen(num2)) ? ft_strlen(num1) : ft_strlen(num2));
	if (sign >= 0)
	{
		sum = ft_add(num1, num2, len);
	}
	else if (sign < 0)
	{
		if (ft_strlen(strip_minus(num1)) >= ft_strlen(strip_minus(num2)))
			sum = ft_sub(num1, num2, len);
		else
			sum = ft_sub(num2, num1, len);
	}
	else
		ft_putstr("Error!\n");
	print_sum(sum, sign);
	return (0);
}