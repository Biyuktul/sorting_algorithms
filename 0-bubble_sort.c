#include "sort.h"
#include <stdio.h>

void swap(int *num1, int *num2);
/**
 * bubble_sort - sorts an array using the bubble sort algorithm
 * @array: array to be sorted
 * @size: the size of the array
 * Return: Always Void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, swp;

	/* For more efficiency i loops from 0 to size - 1*/
	for (i = 0; i < size; i++)
	{
		/* swp: If the array is sorted, the func stop */
		swp = 0;
		/* And j loops from 0 to size - 1 - i*/
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				swp = 1;
			}
		}
		if (swp == 0)
			break;
	}
}

/**
 * swap - swaps two ints in the array
 * @a: first number
 * @b: second number
 * Return: Always Void
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
