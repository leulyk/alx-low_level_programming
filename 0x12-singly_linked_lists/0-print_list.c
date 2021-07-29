#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

long _strlen(char *str);
/**
 * print_list - prints a linked list
 *
 * @head: pointer to the head node
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *head)
{
	size_t length;

	length = 0;
	while (head != NULL)
	{
		length++;
		if (head->str)
			printf("[%lu] %s\n", _strlen(head->str), head->str);
		else
			printf("[0] (nil)\n");
		head = head->next;
	}
	return (length);
}

/**
 * _strlen - compute the length of a string
 *
 * @str: the string to process
 *
 * Return: length of the string
 */
long _strlen(char *str)
{
	long length;

	length = 0;
	while (*(str + length))
		length++;

	return (length);
}
