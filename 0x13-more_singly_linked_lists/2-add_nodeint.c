#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_nodeint - add a new node to the beginning of a singly linked list
 *
 * @h: pointer to pointer to the head nod
 * @n: integer element to assign to the new node
 *
 * Return: address of the new element, NULL if it fails
 */
listint_t *add_nodeint(listint_t **h, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (0);
	new_node->n = n;
	new_node->next = *h;
	*h = new_node;

	return (new_node);
}
