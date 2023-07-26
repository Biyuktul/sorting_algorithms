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
	if (!array || size == 1)
		return;
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
	for (j = 1; j < k + 1; j++)
		count_array[j] += count_array[j - 1];
	print_array(count_array, k + 1);
	for (j = k; j > 0; j--)
	{
		count_array[j] = count_array[j - 1];
	}
	count_array[0] = 0;
	for (i = 0; i < size; i++)
	{
		array[count_array[temp_array[i]]] = temp_array[i];
		count_array[temp_array[i]] += 1;
	}
	free(count_array);
	free(temp_array);
}
