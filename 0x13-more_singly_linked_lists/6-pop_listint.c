#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - remove the head node of a singly linked list
 *
 * @head: pointer to the head node
 *
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *current = *head;

	if (!(*head))
		return (0);

	data = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = current;

	return (data);
}
