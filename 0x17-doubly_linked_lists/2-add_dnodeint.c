#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - add a node to beginning of a doubly linked list
 *
 * @head: address of the head node
 * @num: integer data of the new node
 *
 * Return: address of the new node
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int num)
{
	dlistint_t *newhead;

	newhead = malloc(sizeof(dlistint_t));
	if (newhead == NULL)
		return (NULL);
	newhead->n = num;

	newhead->next = *head;
	if (*head)
		(*head)->prev = newhead;
	*head = newhead;

	return (newhead);
}
