#include "sort.h"
#include <stdio.h>

/**
 * swap - Swaps two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * This function swaps the values of two integers pointed to by @a and @b.
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * shell_sort - Sorts an array of integers using the Shell Sort algorithm.
 * @a: Pointer to the first element of the array.
 * @n: Number of elements in the array.
 * Returns: void
 */
void shell_sort(int *array, size_t size)
{
	int h, i, j, t;
	for (h = size; h >= 1; h /= 2)
	{
		for (i = h; i < size; i++)
		{
			t = array[i];
			for (j = i; j >= h && t < array[j - h]; j -= h)
			{
				swap(&array[j], &array[j - h]);
				print_array(array, size);
			}
			array[j] = t;
		}
	}
}
