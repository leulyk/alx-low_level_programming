#include "holberton.h"
#include <stdlib.h>

char *_memset(char *str, char b, unsigned int n);

/**
 * _calloc - allocate memory for an array
 *
 * @nmemb: number of elements in the array
 * @size: size of the elements
 *
 * Description: set memory to zero
 *
 * Return: pointer to newly allocated array
 *	   NULL if @nmemb or @size are 0, or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);

	return (ptr);
}


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
