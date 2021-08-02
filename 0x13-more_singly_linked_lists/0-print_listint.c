#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print integers on a singly linked list
 *
 * @head: pointer to the head node
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *head)
{
	size_t count;

	count = 0;
	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}
	return (count);
}
