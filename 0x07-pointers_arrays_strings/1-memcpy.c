#include "holberton.h"

/**
 * _memcpy - copy a memory area
 *
 * @dest: pointer to the destination memory
 * @src: pointer to the source memory
 * @n: number of bytes to copy
 *
 * Return: pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
		*(dest + i) = *(src + i);
	return (dest);
}
