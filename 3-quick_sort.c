#include "sort.h"

int *do_swap(int *array, int pos1, int pos2);

/**
 * quick_sort -sorting algoritmh
 * @array: list array
 * @size: size array
 *
 * Return: none
 */
void quick_sort(int *array, size_t size)
{
	unsigned long int i, j = 0;
	int pivot = 0;

	if (size < 2)
		return;

	pivot = (int) size, pivot = pivot - 1;
	i = j;
	while (j < size)
	{
		if (array[j] < array[pivot])
		{
			i += 1;
			do_swap(array, i, j);
			print_array(array, size);
		} j++;
	}
	do_swap(array, i, pivot);
	print_array(array, size);
}

/**
 * do_swap - change  positions in array
 * @array: array list
 * @pos1: position to change
 * @pos2: position to change
 *
 * Return: array pointer
 */
int *do_swap(int *array, int pos1, int pos2)
{
	int key;

	key  = array[pos1];
	array[pos1] = array[pos2];
	array[pos2] = key;
	return (array);
}
