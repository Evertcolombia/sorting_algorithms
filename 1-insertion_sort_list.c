#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

listint_t *change_no(listint_t **tmp);

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = NULL, *t2 = NULL;

	if (!*list)
		return;

	tmp = *list;

	while (tmp)
	{
		if (tmp->n > tmp->next->n)
		{
			tmp = change_no(&tmp);
			/*if (tmp->prev == NULL)
				*list = tmp;*/
			print_list(*list);
			t2 = tmp;
		}

		if (t2 && t2->prev)
		{
			while (t2)
			{
				if (t2->prev && t2->prev->n > t2->n)
				{
					t2 = t2->prev;
					t2 = change_no(&t2);
					if (t2->prev == NULL)
						*list = tmp;


					print_list(*list);
					/*print_list(t2);*/
				}
				t2 = t2->prev;
			}
		}
		tmp = tmp->next;
	}
}


listint_t *change_no(listint_t **tmp)
{
	listint_t *t = NULL, *t_n = NULL;

	t = *tmp;
	t_n = (*tmp)->next;

	if (t_n->next)
		t_n->next->prev = t;
	if (t->prev)
		t->prev->next = t_n;
	t_n->prev = t->prev;
	t->next = t_n->next;
	t->prev = t_n;
	t_n->next = t;

	return (t);
	
}
