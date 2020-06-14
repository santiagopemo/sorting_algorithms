#include "sort.h"
/**
 * swap - function that swaps two integers
 * @a: pointer to a integer to swap
 * @b: pointer to a integer to swap
 */
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 * partition - function that sorts a part of the array
 * in ascending order using the Quick sort algorithm
 * @array: array to sort
 * @size: array size
 * @low: lowest index of tne part of the array to sort
 * @high: highest index of tne part of the array to sort
 *
 * Return: the index of the last pivot
 */
int partition(int *array, size_t size, int low, int high)
{
	int i, j, pivot = array[high];

	for (i = j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (j != i)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}

	if (array[i] > array[high])
	{
		swap(&array[i], &array[high]);
		print_array(array, size);
	}
	return (i);
}
/**
 * quicksort- function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: array to sort
 * @size: array size
 * @low: lowest index of tne part of the array to sort
 * @high: highest index of tne part of the array to sort
 */
void quicksort(int *array, size_t size, int low, int high)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, size, low, high);
		quicksort(array, size, low, pivot - 1);
		quicksort(array, size, pivot + 1, high);
	}
}
/**
 * quick_sort- function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: array to sort
 * @size: aray size
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	quicksort(array, size, 0, size - 1);
}
