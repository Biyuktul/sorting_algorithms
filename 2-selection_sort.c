#include "sort.h"

/**
 * swapInt - swaps two given integers
 * @a: first nuber
 * @b: second number
 * Return: Always void
*/

void swapInt(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - sorts an array using selection sort
 * @array: array tobe sorted
 * @size: Size of the array
 * Return: Always Void
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min])
				min = j;
		if (min != i)
		{
			swapInt(&array[i], &array[min]);
			print_array(array, size);
		}
	}
}
