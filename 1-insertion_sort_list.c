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
	{
		tmp = tmp->next;
		a  = tmp->prev;
	}

	while (tmp)
	{
		if (tmp->next)
			b = tmp->next;

		if (tmp->prev->n > tmp->n)
		{
			change_no(tmp, a, b);
			print_list(*list);
		} tmp = tmp->next;
	}
}

void change_no(listint_t *t, listint_t *a, listint_t *b)
{
	if (b)
		b->prev = a;

	a->next = b;
	t->next = NULL, t->prev = NULL;
	/*if (t->next)
	t->next = a;*/
	
	if (a->prev)
		a->prev->next = t, t->prev = a->prev;

	t->next = a;
}
