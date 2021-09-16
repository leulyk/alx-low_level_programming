#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print a doubly linked list
 *
 * @h: the head node
 *
 * Return: number of nodes
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;

	while (h)
	{
		printf("%d\n", h->n);
		length++;
		h = h->next;
	}

	return (length);
}
