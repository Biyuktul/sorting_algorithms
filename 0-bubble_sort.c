#include "sort.h"
/**
 * swapInt - function to swap two numbers
 * @a: address of first number
 * @b: address of second number
 * Return: Void
 */
void swapInt(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - function to sort an array
 * @array: array to be sorted
 * @size: size of the array
 * Return: Void
 */
void bubble_sort(int *array, size_t size)
{
	int  swapped = 1;
	size_t pass, i;

	if (size < 2)
		return;

	for (pass = size; pass > 0 && swapped; pass--)
	{
		swapped = 0;
		for (i = 0; i < pass - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swapInt(&array[i], &array[i + 1]);
				swapped = 1;
				print_array(array, size);
			}
		}
	}
}
