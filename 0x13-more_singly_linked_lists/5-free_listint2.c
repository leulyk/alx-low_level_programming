#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a singly linked list
 *
 * @head: pointer to the head node
 *
 * Description: Sets head to NULL
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head)
	{
		current = (*head)->next;
		free(*head);
		(*head) = current;
	}
}
