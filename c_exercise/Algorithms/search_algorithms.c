
/* SEARCH */

#include <stdio.h>

void	sort_arr(int array[], int len)
{
	int		i;
	int		tmp;

	i = 0;
	while (i < len)
	{
		if (array[i] > array[i + 1])
		{
			tmp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
}

void	print_arr(int array[], int len)
{
	int		i;

	i = 0;
	while (i < len)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("%s\n", "");
}

int		ft_linear_search(int array[], int x, int len)
{
	int		i;

	i = 0;
	while (i < len && array[i] != x)
		i++;
	return (i);
}

int		ft_binary_search(int array[], int x, int len)
{
	int		left;
	int		right;
	int		found;
	int		m;
	int		count;

	left = 0;
	right = len;
	found = 0;
	count = 0;
	while (left < right && found == 0)
	{
		m = (left + right) / 2;
		if (array[m] == x)
			found = m;
		else if (array[m] < x)
			left = m + 1;
		else
			right = m - 1;
		count++;
	}
	return (count);
}

int		main(void)
{
	int		array[] = {11, 3, 65, 188, 2, -4, 98, 17, 101, -124, 9, 7, -1};
	int		x;
	int		len;
	int		i;

	i = 0;
	len = (int)(sizeof(array) / sizeof(int));
	sort_arr(array, len);
	print_arr(array, len);
	x = 98;
	i = ft_binary_search(array, x, len);
	printf("binary: found %d in %d moves.\n", x, i);
	i = ft_linear_search(array, x, len);
	printf("linear: found %d in %d moves.\n", x, i);
	return (0);
}