#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

void merge_recursion(size_t low, size_t high, int *array);

void merge_sort(int *array, size_t size)
{
	int *s_array = malloc(sizeof(int) * size);

	if (s_array == NULL)
		return;
	merge_recursion(0, size - 1, 0, s_array);
}

void merge_recursion(size_t low, size_t high, int i, int *s_array)
{
	if (low != high)
	{
		merge_recursion(low, (high + low + 1) / 2 - 1, i++, s_array);
		merge_recursion((high + low + 1) / 2, high, i++,  array);
	} else
	{

	}
}
