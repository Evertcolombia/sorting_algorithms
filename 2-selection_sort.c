#include "sort.h"
#include <stdio.h>


int *do_swap(int *array, int current, int tmp);

void selection_sort(int *array, size_t size)
{
	unsigned int j, c = 0;
	int current, flag = 0;
	
	while(c < size && size > 1)
	{
		current = c, flag = 0;

		for (j = c + 1; j < size; j++)
		{
			if (array[j] < array[current])
				current = j, flag = 1;
		}
		if (flag)
		{
			do_swap(array, current, j);
			print_array(array, size);
		} c++;
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
