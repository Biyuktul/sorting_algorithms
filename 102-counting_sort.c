#include "sort.h"
#include <stdlib.h>

/**
  * counting_sort - counting sort algo
  * @array: array
  * @size: size of array
  */
void counting_sort(int *array, size_t size)
{
	size_t i;
	int k, j;
	int *count_array;
	int *temp_array = malloc(sizeof(int) * size);

	if (temp_array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		temp_array[i] = array[i];
		if (i == 0)
			k = array[i];
		else if (array[i] > k)
			k = array[i];
	}
	count_array = malloc(sizeof(int) * (k + 1));
	if (count_array == NULL)
	{
		free(temp_array);
		return;
	}
	for (j = 0; j < k + 1; j++)
		count_array[j] = 0;
	for (i = 0; i < size; i++)
		count_array[(array[i])] += 1;
	for (j = 0; j < k + 1; j++)
	{
		if (j == 0)
			continue;
		count_array[j] += count_array[j - 1];
	}
	print_array(count_array, k + 1);
	for (i = 0; i < size; i++)
	{
		count_array[temp_array[i]] -= 1;
		array[count_array[temp_array[i]]] = temp_array[i];
	}
	free(count_array);
	free(temp_array);
}
