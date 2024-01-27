#include "sort.h"

/**
 * shell_sort - Sort array of ints using Shell sort.
 * @array: integer array to sort.
 * @size: size of array.
 *
 * Return: voide.
 */
void shell_sort(int *array, size_t size)
{
    size_t gap = 1, i, j;
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
		for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
                array[j] = array[j - gap];
            array[j] = temp;
        }
        gap = (gap - 1) / 3;
        print_array(array, size);
    }
}
