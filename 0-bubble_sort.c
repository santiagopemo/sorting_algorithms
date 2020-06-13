#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: array to sort
 * @size: size of array to sort
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp, is_ordered;

	if (size < 2)
		return;

	for (is_ordered = 0, i = 0; is_ordered == 0; i++)
	{
		is_ordered = 1;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
				is_ordered = 0;
			}
		}
	}
}
