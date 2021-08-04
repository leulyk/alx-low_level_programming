#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a specified index
 *
 * @head: pointer to the head node
 * @idx: the index to insert at
 * @num: data of the new node to be inserted
 *
 * Description: index starts at 0
 * Return: address of the new node
 *	   NULL if it fails, or it's impossible to add new node at index
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int num)
{
	unsigned int count;
	listint_t *new_node;
	listint_t *current = *head;
	listint_t *previous = NULL;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	count = 0;
	do {
		if (count == idx)
		{
			new_node->n = num;
			if (previous)
				previous->next = new_node;
			else
				*head = new_node;
			new_node->next = current;
			return (new_node);
		}
		count++;
		previous = current;
		current = current->next;
	} while (previous && (count <= idx));

	return (NULL);
}
