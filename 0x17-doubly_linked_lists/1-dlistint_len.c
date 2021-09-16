#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - print length of a doubly linked list
 *
 * @h: the head node
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}

	return (length);
}
