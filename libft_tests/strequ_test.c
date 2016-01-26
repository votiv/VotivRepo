#include "libft.h"

void	assertEquals(int actual, int expected);

int		main()
{
	char	tmp[] = "Bai Cristiiii!";
	char	equ[] = "Bai Cristiiii!";
	char	razvan[] = "Bai Razvan";
	int		actual, expected;

	actual = ft_strequ(tmp, equ);
	expected = 1;
	assertEquals(actual, expected);

	actual = ft_strnequ(tmp, razvan, 4);
	assertEquals(actual, expected);

	actual = ft_strnequ(tmp, razvan, 10);
	expected = 0;
	assertEquals(actual, expected);

	return 0;
}

void	assertEquals(int actual, int expected)
{
	if (actual == expected)
	{
		printf("OK\n");
	}
	else
	{
		printf("ERROR! Actual = %d, expected = %d\n", actual, expected);
	}
}
