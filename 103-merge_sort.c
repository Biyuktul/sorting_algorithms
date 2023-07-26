#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

void merge_recursion(size_t low, size_t high, int *array);

/**
  * merge_sort - merge sort algo
  * @array: array
  * @size: size
  */
void merge_sort(int *array, size_t size)
{
	merge_recursion(0, size - 1, array);
}

/**
  * merge_recursion - merge recursion func
  * @low: low
  * @high: high
  * @array: array
  */
void merge_recursion(size_t low, size_t high, int *array)
{
	if (low != high)
	{
		merge_recursion(low, (high + low + 1) / 2 - 1, array);
		merge_recursion((high + low + 1) / 2, high, array);
	} else
		printf("%d\n", array[low]);
}
