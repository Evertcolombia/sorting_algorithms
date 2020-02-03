#include "sort.h"
#include <stdio.h>


int *do_swap(int *array, int current, int tmp);

void selection_sort(int *array, size_t size)
{
	unsigned int i = 0, j;
	int current, tmp = 0;
	
	while (i < size - 1)
	{
		current = i, tmp = i;
		
		for (j = i; j < size; j++)
		{
			if (array[j] < array[current])
				current = j;
		}
		do_swap(array, current, tmp);
		print_array(array, size);
		i++;
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
