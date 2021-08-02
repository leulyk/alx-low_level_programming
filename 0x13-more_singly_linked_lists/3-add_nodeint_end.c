#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add a node to the end of a linked list
 *
 * @h: pointer to head of the linked list
 * @n: integer to assign to the element of the linked list
 *
 * Return: address of the new node, NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **h, const int n)
{
	listint_t *new_node;
	listint_t *current = *h;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (!current)
	{
		*h = new_node;
	}
	else
	{
		while (current->next)
			current = current->next;
		current->next = new_node;
	}
	new_node->next = NULL;

	return (new_node);
}
