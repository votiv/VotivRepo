/* SORT */

#include <stdio.h>
#include <string.h>

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

void	ft_linear_insertion(int array[], int len)
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
		i++;
	}
}

void	ft_binary_insertion(int array[], int len)
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
		left = 0;
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
		while (j > left)
		{
			array[j] = array[j - 1];
			j--;
		}
		array[right] = tmp;
		i++;
	}
}

void	binary_insertion_sort_by_AMomentOfZen(int array[], int len)
{
	register int	i, m;
	int				hi, lo, tmp;

	for (i = 1; i < len; i++)
	{
		lo = 0;
		hi = i;
		m = i / 2;
		do
		{
			if (array[i] > array[m])
				lo = m + 1;
			else if (array[i] < array[m])
				hi = m;
			else
				break ;
			m = lo + ((hi - lo) / 2);
		} while (lo < hi);
		if (m < i)
		{
			tmp = array[i];
			memmove(array + m + 1, array + m, sizeof(int) * (i - m));
			array[m] = tmp;
		}
	}
}

void	ft_bubble_sort(int array[], int len)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	while (i < len)
	{
		j = len - 1;
		while (j > i)
		{
			if (array[j - 1] > array[j])
			{
				tmp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = tmp;
			}
			j--;
		}
		i++;
	}
}

void	ft_shaker_sort(int array[], int len)
{
	int		i;
	int		ready;
	int		tmp;

	do
	{
		ready = 0;
		i = len - 1;
		while (i > 0)
		{
			if (array[i - 1] > array[i])
			{
				tmp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = tmp;
				ready = 1;
			}
			i--;
		}
		i = 1;
		while (i < len)
		{
			if (array[i - 1] > array[i])
			{
				tmp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = tmp;
				ready = 1;
			}
			i++;
		}
	} while (ready);
}

int		main(void)
{
	int		array[] = {11, 3, 65, 188, 2, -4, 98, 17, 101, -124, 9, 7, -1};
	int		len;

	len = (int)(sizeof(array) / sizeof(int));
	printf("the array : ");
	print_arr(array, len);
	printf("%s", "shaker sorted array: ");
	ft_shaker_sort(array, len);
	print_arr(array, len);
	/*
	printf("the linear insertion sorted array : ");
	print_arr(array, len);

	printf("the binary insertion sorted array : ");
	print_arr(array, len);*/
	return (0);
}