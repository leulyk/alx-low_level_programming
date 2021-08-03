#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a specified index
 *
 * @head: pointer to the head node
 * @index: index to delete the node at
 *
 * Return: 1 if succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *current = *head;
	listint_t *previous = NULL;

	count = 0;
	while (current && (count <= index))
	{
		if (count == index)
		{
			if (previous)
				previous->next = current->next;
			else
				*head = current->next;
			free(current);
			return (1);
		}
		count++;
		previous = current;
		current = current->next;
	}
	return (-1);
}
