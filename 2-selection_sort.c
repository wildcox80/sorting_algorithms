#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers
 * using selection sort algorithm.
 *
 * @array: Array of integers
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	size_t min_index, flag;

	if (!array || !size)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[min_index] > array[j])
			{
				min_index = j;
				flag = 1;
			}
		}
		if (flag)
			swap(&array[min_index], &array[i]);
			print_array(array, size);

	}
}

/**
 * swap - function to swapping values
 * @a: value one for swap
 *
 * @b: value two for swap
 */

void swap(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

