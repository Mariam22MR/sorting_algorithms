#include "sort.h"

/**
 * shell_sort - Sort array of integers using Shell sort.
 * @array: integer array of sort.
 * @size: size of array.
 *
 * Return: void.
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1, i, c;
	int temp;

	if (!array || size < 2)
		return;

	while (gap < size / 3)
		gap = gap * 3 + 1;

	while (gap >= 1)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			for (c = i; c >= gap && array[c - gap] > temp; c -= gap)
			{
				array[c] = array[c - gap];
			}
			array[c] = temp;
		}
		gap = (gap - 1) / 3;
		print_array(array, size);
	}
}
