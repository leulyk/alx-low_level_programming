#include "lists.h"

/**
 * reverse_listint - reverses a singly linked list
 *
 * @head: pointer to the head node
 *
 * Description: Using more than 1 loop is not allowed
 *		Using more than 2 variables is not allowed
 *		Using malloc, free or arrays is not allowed
 *
 * Return: pointer to the head node of the reversed list
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;

		(*head)->next = previous;
		previous = (*head);
		(*head) = next;
	}
	(*head) = previous;

	return (*head);
}
