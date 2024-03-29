#include "sort.h"
#include <stdlib.h>

int counting_radix(int *array, size_t size, int d);

/**
 * radix_sort - radix sort algo
 * @array: array
 * @size: size of array
 */
void radix_sort(int *array, size_t size)
{
	int d = 1;

	if (!array || size == 1)
		return;

	while (counting_radix(array, size, d) != -1)
	{
		print_array(array, size);
		d *= 10;
	}
}

/**
 * counting_radix - counting sort algo
 * @array: array
 * @size: size of array
 * @d: modulos
 * Return: return 0 or -1
 */
int counting_radix(int *array, size_t size, int d)
{
	size_t i;
	int k = 9, j, c;
	int *count_array;
	int *temp_array = malloc(sizeof(int) * size);

	if (temp_array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
		temp_array[i] = array[i];
	count_array = malloc(sizeof(int) * (k + 1));
	if (count_array == NULL)
	{
		free(temp_array);
		return (-1);
	}
	for (j = 0; j < k + 1; j++)
		count_array[j] = 0;
	for (i = 0; i < size; i++)
	{
		count_array[(array[i] / d) % 10] += 1;
		if ((array[i] / d) != 0)
			j = -1;
	}
	if (j == k + 1)
	{
		free(temp_array);
		free(count_array);
		return (-1);
	}
	for (j = 1; j < k + 1; j++)
		count_array[j] += count_array[j - 1];
	for (j = k; j > 0; j--)
	{
		count_array[j] = count_array[j - 1];
	}
	count_array[0] = 0;
	for (i = 0; i < size; i++)
	{
		c = (temp_array[i] / d) % 10;
		array[count_array[c]] = temp_array[i];
		count_array[c] += 1;
	}
	free(count_array);
	free(temp_array);
	return (0);
}
