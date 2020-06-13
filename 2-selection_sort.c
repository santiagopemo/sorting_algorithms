#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: array to sort
 * @size: array size
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_i, tmp;

	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min_i = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_i])
				min_i = j;
		}
		tmp = array[min_i];
		array[min_i] = array[i];
		array[i] = tmp;
		if (min_i != i)
			print_array(array, size);
	}
}
