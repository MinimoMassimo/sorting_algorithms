#include "sort.h"

/**
 * pivot - sorts the array according to the pivot
 * @arr: the array
 * @start: the starting index of arr
 * @end: ending index of arr
 * Return: the index of the pivot
 */
int pivot(int *arr, int start, int end)
{
	int pivot = arr[end];
	int temp, i, j;

	i = start - 1;

	for (j = start; j < end; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			print_array(arr, end);
		}
	}
	temp = arr[i + 1];
	arr[i + 1] = arr[end];
	arr[end] = temp;
	return (i + 1);	
}

void recursive(int *array, int start, int end)
{
	int piv;
	if (start < end)
	{
		piv = pivot(array, start, end);
		recursive(array, piv + 1, end);
		recursive(array, start, piv - 1);
	}
}

/**
 * quick_sort - sorts array in ascending using quick sort algo
 * @array: the array to be sorted
 * @size: size of the array
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	recursive(array, 0, size);
}
