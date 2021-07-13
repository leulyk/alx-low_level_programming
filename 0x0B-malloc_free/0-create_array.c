#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - create an array an intialize it with a specified character
 *
 * @size: size of the array
 * @ch: character to initialize the array
 *
 * Return: NULL if size is 0 or fails to allocate memory,
 *		otherwise pointer to the array
 */
char *create_array(unsigned int size, char ch)
{
	char *array;
	unsigned int i;

	if (size < 1)
		return (NULL);
	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; ++i)
		*(array + i) = ch;
	return (array);
}
