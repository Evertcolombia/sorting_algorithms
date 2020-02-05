#include "sort.h"
#include <stdio.h>

int *do_swap(int *array, int pos1, int pos2);

void bubble_sort(int *array, size_t size)
{
	size_t j;
	unsigned long int c = 0;
	int flag = 1;

	if (size < 2)
		return;

	while (size != 0 && flag)
	{
		flag = 0;
		for (j = 1; j < (size - c); j++)
		{
			if (array[j - 1] > array[j])
			{
				flag++;
				do_swap(array, j - 1, j);
				print_array(array, size);
			}
		} c++;
	}
}


int *do_swap(int *array, int pos1, int pos2)
{
	int key;

	key  = array[pos1];
	array[pos1 ]= array[pos2];
	array[pos2] = key;
	return (array);

}
