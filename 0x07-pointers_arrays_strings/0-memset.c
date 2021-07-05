#include "holberton.h"

/**
 * _memset - fill memory with a constant byte
 *
 * @str: pointer to a memory area
 * @b: the constant byte to fill the memory area
 * @n: number of bytes to fill
 *
 * Return: pointer to memory area str
 */
char *_memset(char *str, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; ++i)
		*(str + i) = b;
	return (str);
}
