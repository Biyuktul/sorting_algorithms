#include "sort.h"

void swap(int *a, int *b, int *array, size_t size);
void sort_recursive(int *array, int low, int high, size_t size);
int partition(int *array, int low, int high, size_t size);
/**
 * quick_sort - Sorts an array of integers in ascending order using
 *              the Quick Sort algorithm.
 *
 * @array: Pointer to the first element of the array to be sorted.
 * @size: The number of elements in the array.
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;

	sort_recursive(array, 0, size, size);
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

/**
 * partition - Rearranges the elements of the array in a way that all elements
 *             less than the pivot are moved to its left, and all elements
 *             greater than the pivot are moved to its right.
 *
 * @array: Pointer to the first element of the array to be partitioned.
 * @low: The starting index of the partitioning range.
 * @high: The ending index of the partitioning range.
 * Return:
 *  Returns the index of the pivot after partitioning. All elements to its
 *  left will be less than or equal to the pivot, and all elements to its
 *  right will be greater than the pivot.
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot_value, i, j;
	pivot_value = array[low];

	i = low;
	j = high;
	while (i < j)
	{
		do
		{
			i++;
		} while (array[i] <= pivot_value);

		do
		{
			j--;
		} while (array[j] > pivot_value);

		if (i < j)
		{
			swap(&array[i], &array[j], array, size);
		}
	}
	swap(&array[low], &array[j], array, size);
	return j;
}

/**
 * sort_recursive - Sorts an array of integers in ascending order using the
 *                  Recursive Quick Sort algorithm.
 *
 * @array: Pointer to the first element of the array to be sorted.
 * @low: The starting index of the current partition.
 * @high: The ending index of the current partition.
 * Return: void
 */
void sort_recursive(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot_index;
		pivot_index = partition(array, low, high, size);

		sort_recursive(array, low, pivot_index, size);
		sort_recursive(array, pivot_index + 1, high, size);
	}
}
