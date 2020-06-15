#include "sort.h"

/**
 * counting_sort - function that sorts an array of integers
 * in ascending order using the Counting sort algorithm
 * @array: array to sort
 * @size: size of the array to sort
 */
void counting_sort(int *array, size_t size)
{
	int *output, *count, max, i, o_idx, c_idx;

	if (size < 2)
		return;
	output = malloc(sizeof(int) * size);
	if (output == NULL)
		return;
	for (max = array[0], i = 0; i < (int)size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	count = malloc(sizeof(int) * (max + 1));
	if (count == NULL)
	{
		free(output);
		return;
	}
	for (i = 0; i <= max; i++)
		count[i] = 0;
	for (i = 0; i < (int)size; i++)
		count[array[i]]++;
	for (i = 1; i <= max; i++)
		count[i] += count[i - 1];
	print_array(count, max + 1);
	for (i = 0; i < (int)size; i++)
	{
		c_idx = array[i];
		o_idx = count[c_idx] - 1;
		output[o_idx] = c_idx;
		count[c_idx] -= 1;
	}
	for (i = 0; i < (int)size; i++)
		array[i] = output[i];
	free(output);
	free(count);
}
