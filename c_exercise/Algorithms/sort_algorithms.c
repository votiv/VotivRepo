/* SORT */

#include <stdio.h>

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

int		ft_straight_insertion(int array[], int len)
{
	int		i;
	int		j;
	int		tmp;

	i = 1;
	while (i < len)
	{
		tmp = array[i];
		j = i;
		while (j > 0 && tmp < array[j - 1])
		{
			array[j] = array[j - 1];
			j--;
		}
		array[j] = tmp;
		print_arr(array, len);
		printf("%s\n", "");
		i++;
	}
	return (i);
}

int		ft_binary_insertion(int array[], int len)
{
	int		i;
	int		j;
	int		m;
	int		left;
	int		right;
	int		tmp;

	i = 1;
	while (i < len)
	{
		tmp = array[i];
		left = 1;
		right = i;
		while (left < right)
		{
			m = (left + right) / 2;
			if (array[m] <= tmp)
				left = m + 1;
			else
				right = m;
		}
		j = i;
		while (j < right + 1)
		{
			array[j] = array[j - 1];
			j--;
		}
		array[right] = tmp;
		print_arr(array, len);
		printf("%s\n", "");
		i++;
	}
	return (i);
}

int		main(void)
{
	int		array[] = {11, 3, 65, 188, 2, -4, 98, 17, 101, -124, 9, 7, -1};
	int		len;
	int		i;

	len = (int)(sizeof(array) / sizeof(int));
	i = ft_binary_insertion(array, len);
	printf("the sorted array : ");
	print_arr(array, len);
	printf("number of moves: %d\n", i);
	return (0);
}