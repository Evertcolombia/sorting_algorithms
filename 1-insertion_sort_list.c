#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

void change_no(listint_t *t, listint_t *a, listint_t *b);

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = NULL, *a = NULL, *b = NULL;

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
			change_no(tmp, a, b);
			print_list(*list);
		} tmp = tmp->next;
	}
}

void change_no(listint_t *t, listint_t *a, listint_t *b)
{

	b = t->next, t->next = a;
	a->next = b;
	a->prev = t;
	b->prev = a;

	if (a->prev)
	{	t->prev = a->prev;
		a->prev->next = t;
	}
	else
		t->prev = NULL;

	return;
}
