#include "holberton.h"

/**
 * _strlen_recursion - compute the length of a string
 *
 * @s: the string to be processed
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int length = 1;

	if (*s == '\0')
		return (0);
	return (length + _strlen_recursion(s + 1));
}
