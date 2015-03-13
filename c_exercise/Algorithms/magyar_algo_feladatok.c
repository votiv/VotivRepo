/*			*/

#include <stdio.h>

void	swap_two_nums_addsub(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void	swap_two_nums_xor(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

void	euklidean_1(int a, int b, int *lkkt, int *lnko)
{
	int		r;
	int		x;
	int		y;

	x = a;
	y = b;
	r = a % b;
	while (r != 0)
	{
		a = b;
		b = r;
		r = a % b;
	}
	*lnko = b;
	*lkkt = (x * y) / *lnko;
}

void	euklidean_2(int a, int b, int *lkkt, int *lnko)
{
	int		x;
	int		y;

	x = a;
	y = b;
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	*lnko = a;
	*lkkt = (x * y) / *lnko;
}

int		ft_factorial(int n)
{
	if (n == 0)
		return (1);
	else
		return (n * ft_factorial(n - 1));
}

int		is_num_prime_Wilson_theorem(int n)
{
	if (((ft_factorial(n - 1) + 1) % n) == 0)
		return (1);
	else
		return (0);
}

int		main(void)
{
	int		a;

	a = 111515;
	is_num_prime_Wilson_theorem(a) == 1 ? printf("%d is prime.\n", a) : printf("%d is not prime.\n", a);
	return 0;
}