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

void	sort_3_nums(int a, int b, int c)
{
	
}

int		main(void)
{
	int		a;
	int		b;

	a = 5;
	b = 3;
	swap_two_nums_addsub(&a, &b);
	printf("swap_two_nums_addsub: a = %d, b = %d\n", a, b);
	swap_two_nums_xor(&a, &b);
	printf("swap_two_nums_xor: a = %d, b = %d\n", a, b);
	return 0;
}