#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - prints a singly linked list (can print lists with loop)
 *
 * @head: head pointer of singly linked list
 *
 * Return: Number of elements in list
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *previous;
	unsigned int count = 0;

	current = head;
	if (current == 0)
		return (0);

	while (current != 0)
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
