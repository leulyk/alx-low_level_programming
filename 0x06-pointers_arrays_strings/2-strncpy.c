#include "holberton.h"

/**
 * _strncpy - copy specific bytes of characters from one string to another
 *
 * @dest: the string to be copied to
 * @src: the string to copy
 * @n: number of bytes to copy
 *
 * Return: the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; ++i)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = 0;
		++i;
	}
	return (dest);
}
