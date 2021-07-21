#include "function_pointers.h"

/**
 * int_index - search an integer in an array
 *
 * @array: the integer array
 * @size: size of the array
 * @cmp: pointer to a compare function
 *
 * Description: find an integer in an array an perform a certain
 * comparison on it
 *
 * Return: -1 if size <= 0 or no match found, otherwise return the
 * index of the first element for which cmp does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array != 0 && cmp != 0 && size > 0)
	{
		for (index = 0; index < size; ++index)
		{
			if (cmp(array[index]))
				return (index);
		}
	}
	return (-1);
}
