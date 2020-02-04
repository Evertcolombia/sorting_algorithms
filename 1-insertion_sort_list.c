#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

listint_t *change_no(listint_t *tmp, listint_t *a);

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = NULL, *a = NULL;

	if (!*list)
		return;

	tmp = *list;

	while (tmp->next && *list)
	{
		if (tmp->n > tmp->next->n)
		{
			tmp = change_no(&tmp);
				if (!tmp->prev)
					*list = tmp;
			print_list(*list);
			a = tmp;

			while (tmp->prev)
			{
				a = tmp->prev;

				if (a->n > tmp->n)
					change_no(tmp,a);
				tmp = tmp->prev;
			}
			print_list(*list);
		} tmp = tmp->next;
	}
}


listint_t *change_no(listint_t **tmp)
{
	lisint_t *t = NULL, *h = NULL;

	t = (*tmp)->next;
	h = *tmp;

	if (t->next)
	{
		t->next->prev = h;
        }
	/*else
		a->next = NULL;*/
	if (h->prev)
		h->prev->next = t;
	/*else
		tmp->prev = NULL;*/

	h->next = t->next;;
	t->prev = h->prev;
	h->prev = t;
	t->next = h;

	return (t);
}
