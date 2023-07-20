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
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
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
