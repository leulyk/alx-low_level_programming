#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at a given index
 *
 * @head: pointer to the head node
 * @index: index to delete at
 *
 * Return: 1 if success, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int counter = 0;

	while (current)
	{
		if (counter == index)
		{
			if (current == *head)
				*head = current->next;
			else
				current->prev->next = current->next;
			if (current->next)
				current->next->prev = current->prev;
			free(current);
			return (1);
		}
		counter++;
		current = current->next;
	}
	return (-1);
}
