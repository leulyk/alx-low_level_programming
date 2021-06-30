#include "holberton.h"

/**
 * _strncat - concatenate two strings by using number of bytes
 * specified from the source
 *
 * @dest: string to be copied to
 * @src: string to copy
 * @n: number of bytes to copy
 *
 * Return: the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		++i;
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		++j;
		++i;
	}
	return (dest);
}
