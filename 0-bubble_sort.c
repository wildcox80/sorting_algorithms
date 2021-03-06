#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers
 * using bubble sort algorithm.
 *
 * @array: Array of integers
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int flag, tmp;

	if (!array || !size)
		return;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0 ; j < (size - i - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				flag = 1;
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
	}
}

