#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

void change_no(listint_t *, listint_t *a, listint_t *b);

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = NULL, *a = NULL, *b = NULL;

	if (!*list)
		return;

	tmp = *list;
	tmp = tmp->next;

	while (tmp)
	{
		a = tmp->prev;
		if (tmp->next)
			b = tmp->next;

		if (a->n > tmp->n)
		{
			change_no(tmp, a, b);
			print_list(*list);
		} tmp = tmp->next;
	}
}

void change_no(listint_t *t, listint_t *a, listint_t *b)
{

	a->next = b;
	b->prev = a;

	/*if (t->next)
		t->next = a;*/

	if (a->prev)
	{
		a->prev->next = t;
		a->prev = t;
	}
	a->prev = t;
}
