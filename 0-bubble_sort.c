#include "sort.h"
#include <stdio.h>

int *do_swap(int *array, int pos1, int pos2);

void bubble_sort(int *array, size_t size)
{
	size_t i;

	if (size < 2)
		return;

	for (i = 1; i < size; i++)
	{

		while (i < size)
		{
			if (array[i - 1] > array[i])
			{
				if (i == size)
				{
					do_swap(array, i - 1, i);
	                                print_array(array, size);
					i++;
				}
				else
				{
					do_swap(array, i - 1, i);
	        	               	print_array(array, size);
					i++;
				}
			}
			i++;
		}
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
