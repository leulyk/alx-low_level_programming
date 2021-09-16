#include "lists.h"

/**
 * sum_dlistint - compute the sum of integer data in a doubly linked list
 *
 * @head: the head node
 *
 * Return: sum of the numbers, or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
