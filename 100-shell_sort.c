#include "sort.h"
#include <stdio.h>

/**
 * shell_sort - Sorts an array of integers using the Shell Sort algorithm.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * Returns: void
 */

void shell_sort(int *array, size_t size)
{
	int tmp;
	size_t j, i, increment;

	if (!array || size == 1)
		return;

	increment = 1;
	while (increment <= size / 3)
	{
		increment = increment * 3 + 1;
	}

	while (increment > 0)
	{
		for (i = increment; i < size; i++)
		{
			tmp = array[i];
			for (j = i; j >= increment && tmp < array[j - increment]; j -= increment)
			{
				array[j] = array[j - increment];
			}
			array[j] = tmp;
		}

		print_array(array, size);
		increment = (increment == 1) ? 0 : (increment - 1) / 3;
	}
}
