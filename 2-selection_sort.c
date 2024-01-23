#include "sort.h"

/**
 * swap - swap two ints
 * @a: pointer to first int
 * @b: pointer to second int
 */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * selection_sort - function sorts using selection sort algorithm.
 * @array: array to be sort.
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, k;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		k = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[k])
			{
				k = j;
			}
		}

		if (k != i)
		{
			swap(&array[i], &array[k]);
			print_array(array, size);
		}
	}
}
