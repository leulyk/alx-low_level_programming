#include "holberton.h"

/**
 * _strlen - return the length of a string
 * @str: the string to be processed
 */
void _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		;
	return (i);
}
