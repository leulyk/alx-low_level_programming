#include "holberton.h"
#include <stdlib.h>

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
	char *ptr;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; ++i)
		ptr[i] = 0;

	return (ptr);
}
