#include "sort.h"

void swap(int *a, int *b);

/**
  * partition - parition func
  * @array: array
  * @low: low
  * @high: high
  * @size: size of the array
  * Return: return pivot index
  */
size_t partition(int *array, int low, int high, size_t size)
{
	int pivot_value = array[high];
	int i = low, j;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot_value)
		{
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != high)
	{
		swap(&array[i], &array[high]);
		print_array(array, size);
	}
	return (i);
}

/**
  * quick_recursion - quick recursion func
  * @array: array
  * @low: low
  * @high: high
  * @size: size
  */
void quick_recursion(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);

		quick_recursion(array, low, pivot - 1, size);
		quick_recursion(array, pivot + 1, high, size);
	}
}

/**
  * quick_sort - quick sort func
  * @array: array
  * @size: size
  */
void quick_sort(int *array, size_t size)
{
	quick_recursion(array, 0, size - 1, size);
}

/**
  * swap - swap func
  * @a: int
  * @b: int
  */
void swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
