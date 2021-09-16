#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - add a node to the tail of a doubly linked list
 *
 * @head: pointer to the head node
 * @num: integer data of the new node
 *
 * Return: address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int num)
{
	dlistint_t *tailnode;
	dlistint_t *current;

	tailnode = malloc(sizeof(dlistint_t));
	if (tailnode == NULL)
		return (NULL);
	tailnode->n = num;

	if (*head == NULL)
	{
		*head = tailnode;
	}
	else
	{
		current = *head;
		while (current->next)
			current = current->next;
		current->next = tailnode;
		tailnode->prev = current;
	}

	return (tailnode);
}
