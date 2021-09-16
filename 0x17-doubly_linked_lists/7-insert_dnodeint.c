#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at a given index
 *
 * @h: pointer to the head node
 * @idx: index to insert at
 * @num: integer data of the new node
 *
 * Return: address of the new node, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int num)
{
	dlistint_t *current, *previous, *newnode;
	unsigned int counter = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = num;
	current = *h;
	previous = NULL;
	do {
		if (idx == counter)
		{
			if (previous)
			{
				previous->next = newnode;
				newnode->prev = previous;
			}
			else
			{
				*h = newnode;
			}
			newnode->next = current;
			if (current)
				current->prev = newnode;
			return (newnode);
		}
		counter++;
		previous = current;
		if (current)
			current = current->next;
	} while (previous);

	free(newnode);

	return (NULL);
}
