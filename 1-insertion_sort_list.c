#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = NULL, *a = NULL, *b = NULL;

	if (!*list)
		return (NULL);

	tmp = *list->next;

	while (tmp)
	{
		if (tmp->prev->value > tmp->value)
		{
			a = tmp->prev;
			b = tmp->next;

			if (b)
				b->prev = a, a->next = b;
			
			a->prev = tmp;
			tmp->prev = a->prev;
			tmp->next = a;

			/*si hay algo en tmp->prev->prev
			que en su next apunte a tmp*/
		}
	}
}
