#include "lists.h"

/**
 * get_dnodeint_at_index - get node at a specified index
 *
 * @head: the head node
 * @index: index to look at
 *
 * Return: return address of the node, or NULL if it's not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head)
	{
		if (index == counter)
			return (head);
		head = head->next;
		counter++;
	}

	return (0);
}
