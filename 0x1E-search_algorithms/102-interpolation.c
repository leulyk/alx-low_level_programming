#include <stdio.h>
#include "search_algos.h"


/**
 * interpolation_search - searches an array of integers using the
 * interpolation search algorithm
 *
 * @array: pointer to the first element of the array to search
 * @size: size of the array
 * @value: value to search for
 *
 * Description: To determine probe position use the formula,
 * low + (((high - low) / (array[high] - array[low])) * (value - array[low]))
 *
 * Return: the index at which the value is located at, or -1 if array
 * is null or value can't be found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;
	while (low <= high)
	{
		if (low == high)
		{
			if (array[low] == value)
			{
				printf("Value checked array[%ld] = [%d]\n", low,
					array[low]);
				return (low);
			}
		}
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));
		if (pos < size)
		{
			printf("Value checked array[%ld] = [%d]\n", pos,
				array[pos]);
		}
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}
