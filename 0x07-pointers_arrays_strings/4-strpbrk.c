#include <stddef.h>
#include "holberton.h"

/**
 * _strpbrk - find a byte in a string from a set of bytes
 *
 * @str: string to search
 * @accept: set of bytes to search for
 *
 * Return: first occurrence of one of the bytes from @accept
 * otherwise NULL (if none found)
 */
char *_strpbrk(char *str, char *accept)
{
	int i, j;

	for (i = 0; *(str + i) != '\0'; ++i)
	{
		for (j = 0; *(accept + j) != '\0'; ++j)
		{
			if (*(str + i) == *(accept + j))
				return (str + i);
		}
	}
	return (NULL);
}
