#include "sort.h"

/**
 * bubble_sort - function that sort array of ints using bubble sort algorithm
 * @array: array of ints
 * @size: size of array
 *
 * Return: Null
 */

void bubble_sort(int *array, size_t size)
{
int temp;
size_t i, k;

if (!array || !size)
return;

for (i = 0; i < size - 1; i++)
{
for (k = 0; k < size - i - 1; k++)
{
if (array[k] > array[k + 1])
{
temp = array[k];
array[k] = array[k + 1];
array[k + 1] = temp;
print_array(array, size);
}
}
}
}
