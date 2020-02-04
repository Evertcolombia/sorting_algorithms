#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

void change_no(listint_t *tmp, listint_t *a);

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = NULL, *a = NULL;

	if (!*list)
		return;

	tmp = *list;

	if (tmp->next)
		tmp = tmp->next;

	while (tmp)
	{
		a = tmp->prev;

		if (a->n > tmp->n)
		{
			change_no(tmp, a);

			while (tmp->prev)
			{
				a = tmp->prev;
				/*printf("a : %d\n", a->n);*/
				if (a->n > tmp->n)
					change_no(tmp,a);
				tmp = tmp->prev;
			}

			print_list(*list);
		} tmp = tmp->next;
	}
}


void change_no(listint_t *tmp, listint_t *a)
{
	if (tmp->next)
	{
		a->next = tmp->next;
 		tmp->next->prev = a;
        }
	else
		a->next = NULL;

	if (a->prev)
	{
		a->prev->next = tmp;
		tmp->prev = a->prev;
	}
	else
		tmp->prev = NULL;

	tmp->next = a;
	a->prev = tmp;
}
