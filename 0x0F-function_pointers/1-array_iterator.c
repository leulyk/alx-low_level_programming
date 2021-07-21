#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a function on an array of elements
 *
 * @array: the array to manipulate
 * @size: size of the array
 * @action: the pointer to function to execute
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != 0 && array != 0)
	{
		for (i = 0; i < size; ++i)
			action(array[i]);
	}
}
