#include "lists.h"

/**
 * get_nodeint_at_index - get the node at a specified index
 *
 * @head: pointer to the head node
 * @index: node index to search for
 *
 * Description: index starts with 0
 *
 * Return: pointer to the node if found, otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;
	while (head && (count <= index))
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (0);
}
