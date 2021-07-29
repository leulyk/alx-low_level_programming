#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add a node to the end of a linked list
 *
 * @head: the head node
 * @str: string element of the new node
 *
 * Return: address of the new element, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail;
	list_t *current = *head;
	char *new_str;

	tail = malloc(sizeof(list_t));
	if (!tail)
		return (0);

	new_str = strdup(str);
	tail->str = new_str;
	if (!(tail->str))
	{
		free(tail);
		return (0);
	}
	tail->len = strlen(new_str);

	if (current == NULL)
	{
		*head = tail;
	}
	else
	{
		while (current->next)
			current = current->next;
		current->next = tail;
	}
	tail->next = NULL;

	return (tail);
}
