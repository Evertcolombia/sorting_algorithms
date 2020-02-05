#include "sort.h"
#include <stdio.h>


int *do_swap(int *array, int current, int tmp);

void selection_sort(int *array, size_t size)
{
	unsigned int j, c = 0;
	int current, flag, tmp;
	
	while(c < size)
	{
		current = c, flag = 0, tmp = c;

		for (j= c + 1; j < size; j++)
		{
			if (array[j] < array[current])
				current = j, flag = 1;
		} c++;
		if (flag)
		{
			do_swap(array, current, tmp);
			print_array(array, size);
		}
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
