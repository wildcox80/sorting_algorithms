#include "sort.h"

/*
 * selection_sort - function that sorts an array of integers
 * using selection sort algorithm.
 *
 * @array: Array of integers
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;

	if (!array || !*array || !size || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
		}
		if (min_index != i)
		{
			swap(&array[min_index], &array[i]);
			print_array((const int *)array, size);
		}
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

