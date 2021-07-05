#include <stddef.h>
#include "holberton.h"

/**
 * _strchr - check for occurence of a character in a string
 *
 * @s: string to search
 * @c: character to search for
 *
 * Return: pointer to the first occurence of the character,
 * otherwise NULL (if not found)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; ++i)
		if (*(s + i) == c)
			return (s + i);
	return (NULL);
}
