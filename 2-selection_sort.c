#include "sort.h"

void swap(int *a, int *b, int *array, size_t size);

/**
 * selection_sort - Sorts an array of integers in ascending order using
 *                  the selection sort algorithm.
 *
 * @array: Pointer to the array to be sorted.
 * @size: Size of the array.
 *
 * Return: None (void).
 */
void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t min_idx;

	for (i = 0; i < size; i++)
	{
		min_idx = i;

		for (j = i; j < size; j++)
		{
			if (array[j] < array[min_idx])
			{
				min_idx = j;
			}
		}
		swap(&array[i], &array[min_idx], array, size);
	}
}

/**
 * swap - Swaps two integers in an array.
 *
 * @a: Pointer to the first integer to be swapped.
 * @b: Pointer to the second integer to be swapped.
 * @array: Pointer to the array to be sorted.
 * @size: Size of the array.
 * Return: None (void).
 */
void swap(int *a, int *b, int *array, size_t size)
{
	int temp;

	if (*a != *b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
		print_array(array, size);
	}
}
