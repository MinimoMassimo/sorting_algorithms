#include "sort.h"

/**
 * selection_sort - sorts in ascending order using selection sort
 * @array: the array to be sorted
 * @size: the size of the array
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t min_idx, last_idx, i;
	int temp;

	for (last_idx = 0; last_idx < size; last_idx++)
	{
		min_idx = last_idx;
		for (i = last_idx; i < size; i++)
		{
			if (array[i] < array[min_idx])
				min_idx = i;
		}
		if (last_idx == min_idx)
			continue;
		temp = array[last_idx];
		array[last_idx] = array[min_idx];
		array[min_idx] = temp;
		print_array(array, size);
	}
}
