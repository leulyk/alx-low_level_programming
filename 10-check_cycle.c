#include "lists.h"

/**
 * check_cycle - check if a singly linked list has a cycle in it
 *
 * @list: head node of the linked list
 *
 * Return: 1 if there is a cycle, otherwise 0
 */
int check_cycle(listint_t *list)
{
	listint_t *current;

	if (!list)
		return (0);

	while (list)
	{
		current = list;
		list = list->next;
		if (current <= list)
			return (1);
	}
	return (0);
}
