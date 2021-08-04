#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a singly linked list (safe version)
 *
 * @head: head pointer of singly linked list
 *
 * Description: This function can print lists with a loop
 *		You should go through the list only once
 *		If function fails, exit with status of 98
 *
 * Return: Number of nodes in list
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *previous;
	unsigned int count = 0;

	current = head;
	if (current == 0)
		return (0);

	while (current)
	{
		previous = current;
		current = current->next;

		count++;

		printf("[%p] %d\n", (void *)previous, previous->n);

		if (previous <= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
	}

	return (count);
}
