#include <stddef.h>
#include "lists.h"

/**
 * listint_len - evaluate the length of a singly linked list
 *
 * @head: pointer to the head node
 *
 * Return: length of the list
 */
size_t listint_len(const listint_t *head)
{
	size_t length;

	length = 0;
	while (head)
	{
		head = head->next;
		++length;
	}
	return (length);
}
