#include "holberton.h"

/**
 * _strcpy - copy a string to the end of another string
 * @dest: string to be copied to
 * @src: string to copy
 * Return: a pointer to the resulting string @dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		i++;
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
