#include "lists.h"

/**
 * sum_listint - compute sum of all data in a singly linked list
 *
 * @head: pointer to the head node
 *
 * Return: sum of all data, or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
