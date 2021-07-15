#include "holberton.h"
#include <stdlib.h>

char *_memcpy(char *dest, char *src, unsigned int n);
/**
 * _realloc - reallocate a memory block
 *
 * @ptr: pointer to the old memory block
 * @old_size: size of the allocated space for ptr
 * @new_size: new size in bytes to allocate
 *
 * Description: contents will be copied to the newly allocate space, starting
 * from ptr to the minimum of old and new sizes. If new_size > old_size, the
 * added memory shoulnot be initialized
 *
 * Return: pointer to the new memory block
 *	   if new_size == old_size, return ptr
 *	   otherwise, return NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size;

	if (new_size == old_size)
		return (ptr);
	if (new_size <= 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	min_size = old_size < new_size ? old_size : new_size;
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	_memcpy(new_ptr, ptr, min_size);

	free(ptr);
	return (new_ptr);
}



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
