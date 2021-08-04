#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a singly linked list (safe version)
 *
 * @h: pointer to head of singly linked list
 *
 * Description: This function can free lists with a loop
 *		You should go though the list only once
 *		Sets head to NULL
 *
 * Return: the size of the list that was free’d
 *
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *previous;
	unsigned int count = 0;

	if (current == 0 || h == 0)
		return (0);

	current = *h;
	while (current)
	{
		previous = current;
		current = current->next;
		count++;

		free(previous);

		if (previous <= current)
			break;
	}

	*h = 0;
	return (count);
}
