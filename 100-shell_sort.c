#include "sort.h"

/**
 * shell_sort - unction that sorts an array of integers in ascending
 * order using the Shell sort algorithm, using the Knuth sequence
 * @array: array to sort
 * @size: size of aray to sort
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;
	int tmp;

	if (size < 2)
		return;
	for (gap = 1; gap < size / 3; gap = gap * 3 + 1)
		continue;
	for (; gap > 0; gap /= 3)
	{
		for (i = gap; i < size; i += 1)
		{
			tmp = array[i];
			for (j = i; j >= gap && array[j - gap] > tmp; j -= gap)
				array[j] = array[j - gap];
			array[j] = tmp;
		}
		print_array(array, size);
	}
}
