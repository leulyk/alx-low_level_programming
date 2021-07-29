#include <stdio.h>
#include "lists.h"

/**
 * list_len - compute the length of a linked list
 *
 * @head: pointer to the head node
 *
 * Return: length of the list
 */
size_t list_len(const list_t *head)
{
	size_t length;

	length = 0;
	while (head != NULL)
	{
		length++;
		head = head->next;
	}
	return (length);
}
