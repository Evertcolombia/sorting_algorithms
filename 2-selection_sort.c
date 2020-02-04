#include "sort.h"
#include <stdio.h>


int *do_swap(int *array, int current, int tmp);

void selection_sort(int *array, size_t size)
{
	unsigned int i = 0, j;
	int current, tmp = 0;
	
	for (i = 0; i < size - 1; i++)
	{
		current = i, tmp = i;
		
		for (j = i; j < size; j++)
		{
			if (array[j] < array[current])
				current = j;

			if (j + 1 == size)
			{
				do_swap(array, current, tmp);
				print_array(array, size);
			}
		}
		/*do_swap(array, current, tmp);
		print_array(array, size);*/
	}
}


int *do_swap(int *array, int current, int tmp)
{
        int key;

        key  = array[current];
        array[current] = array[tmp];
        array[tmp] = key;

	return (array);
}
