#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - add a node to beginning of a linked list
 *
 * @head: head node
 * @str: string element for the new_node node
 *
 * Return: address of the new_node element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *new_str;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (0);
	new_str = strdup(str);
	new_node->str = new_str;
	if (!(new_node->str))
	{
		free(new_node);
		return (0);
	}
	new_node->len = strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
