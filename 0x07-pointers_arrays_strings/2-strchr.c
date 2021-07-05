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

	i = 0;
	for (;; ++i)
	{
		if (*(s + i) == c)
			return (s + i);
		if (*(s + i) == '\0')
			return (NULL);
	}
}
