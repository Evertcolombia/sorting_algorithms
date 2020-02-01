#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *a = NULL, b = NULL, tmp = NULL;

	if (!*list)
		return (NULL);

	tmp = *list->next;

	while (tmp)
	{
		if (tmp->prev->value > tmp->value)
		{
			tmp->prev->prev = tmp;
			tmp->prev->next = tmp->next;
			tmp->prev = tmp->prev->prev;
			tmp->next = tmp->prev;
			tmp->next->prev = tmp->prev;

			/*si hay algo en tmp->prev->prev
			que en su next apunte a tmp*/
		}
	}
}
