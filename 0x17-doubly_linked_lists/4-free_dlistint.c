#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 *
 * @h: the head node
 *
 */
void free_dlistint(dlistint_t *h)
{
	dlistint_t *temp;

	if (h == NULL)
		return;
	while (h)
	{
		temp = h->next;
		free(h);
		h = temp;
	}
}
