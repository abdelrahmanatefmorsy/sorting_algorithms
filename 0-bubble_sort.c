#include "sort.h"

/**
 * ubble_sort - sorts an array of integers in ascending order
 * using the bubble sort algorithm
 * @array: the array to be sorted
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int t;
	size_t i, j;

	if (array == NULL || size == NULL)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				t = array[j];
				array[j] = array[j + 1];
				array[j + 1] = t;
				print_array(array, size);
			}
		}
	}
}

