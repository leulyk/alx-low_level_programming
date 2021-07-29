#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free a linked list
 *
 * @head: pointer to head node
 *
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
