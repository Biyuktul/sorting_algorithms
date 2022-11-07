#include "sort.h"

/**
 * swapI - swaps two ints speified by idx1 and idx2
 * @array: the array whose element is going tobe swapped
 * @idx1: the first index
 * @idx2: the second index
 * Return: Always void
*/

void swapI(int *array, size_t idx1, size_t idx2)
{
	int temp;

	temp = array[idx1];
	array[idx1] = array[idx2];
	array[idx2] = temp;
}

/**
 * quick_sort - sort an array using quick sort algorithm
 * @array: the array tobe sorted
 * @size: the size of the array
 * Return: always void
*/

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quickSortRecursion(array, 0, size - 1, size);
}

/**
 * quickSortRecursion - Recursively calls it's self for
 *      different partiotions of the array
 * @array: the array to be sorted
 * @low: start index of the array
 * @high: end index of the array
 * @size: size of the array
 * Return: Always void
*/

void quickSortRecursion(int *array, int low, int high, int size)
{
	if (low < high)
	{
		int pivot_index = lomuto_partition(array, low, high, size);
		/*for left partition*/
		quickSortRecursion(array, low, pivot_index - 1, size);
		/*for right partition*/
		quickSortRecursion(array, pivot_index + 1, high, size);
	}
}

/**
 * lomuto_partition - partitions an array around pivot element
 * @array: array to be partitiond
 * @low: start index
 * @high: end index
 * @size: size of the array
 * Return: the new pivot index
*/

int lomuto_partition(int *array, int low, int high, int size)
{
	int i = low;
	int j;
	int pivot = array[high];

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (array[i] != array[j])
			{
				swapI(array, i, j);
				print_array(array, size);
			}
			i++;
		}
	}
	if (array[i] != array[high])
	{
		swapI(array, i, high);
		print_array(array, size);
	}
	return (i);
}
