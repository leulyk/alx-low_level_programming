#include "lists.h"

/**
 * find_listint_loop - find a loop in a linked list
 *
 * @head: pointer to the head node
 *
 * Description: A maximum of two variables is allowed to delcare
 *		Not allowed to use malloc, free or arrays
 *
 * Return: address of the node where the loop starts, NULL if there is no loop
 *
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hare, *tortoise;

	if (!head)
		return (NULL);

	hare = tortoise = head;

	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = (hare->next)->next;

		if (hare == tortoise)
		{
			tortoise = head;

			while (tortoise && hare)
			{
				if (tortoise == hare)
					return (tortoise);

				tortoise = tortoise->next;
				hare = hare->next;
			}
		}
	}

	return (NULL);
}
