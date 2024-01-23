#include "sort.h"

/**
 * swap - swaps 2 ints value
 * @a: first value
 * @b: second value
 *
 * Return: void
 */
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * lomuto_partition - partition array, places pivot
 * @array: array to be sort
 * @size: size of array
 * @low: low index of subarray
 * @high: high index of subarray
 *
 * Return: index of pivot
 */
size_t lomuto_partition(int *array, size_t size, size_t low, size_t high)
{
	int i, p = array[high], j;

	for (i = j = low; j < high; j++)
	{
		if (array[j] < p)
			swap(array, size, &array[j], &array[i++]);
	swap(array, size, &array[i], &array[high]);
	}
	return (i);
}

/**
 * quicksort - sort array of ints in ascending order using quicksort
 * @array: array to sort
 * @size: size of array
 * @low: low index of subarray
 * @high: high index of subarray
 *
 * Return: void
 */
void quicksort(int *array, size_t size, size_t low, size_t high)
{
	if (low < high)
	{
		size_t pivot = lomuto_partition(array, size, low, high);

		quicksort(array, size, low, pivot - 1);
		quicksort(array, size, pivot + 1, high);
	}
}

/**
 * quick_sort - calls quicksort
 * @array: array to be sorted
 * @size: array size
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;

	quicksort(array, size, 0, size - 1);
}
