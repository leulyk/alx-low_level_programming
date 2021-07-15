#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - allocate a memory
 *
 * @b: number of byte to allocate
 *
 * Return: pointer to allocated memory, or normal process
 * termination with a status of 98 if allocation fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
