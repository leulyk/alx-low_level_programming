#include <stdio.h>
#include "search_algos.h"

int binary_search_main(int *array, size_t low, size_t high, int value);
void print_array_range(int *array, size_t low, size_t high);

/**
 * exponential_search - searches an array of integers using the exponential
 * search algorithm
 *
 * @array: pointer to the first element of the array to be searched
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index at which the value is found, or -1 if array is null or
 * value cannot be found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound, bound_half;

	if (!array)
		return (-1);
	bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	bound = bound > size - 1 ? size - 1 : bound;
	bound_half = bound % 2 == 0 ? bound / 2 : bound / 2 + 1;
	printf("Value found between indexes [%ld] and [%ld]\n",
			bound_half, bound);

	return (binary_search_main(array, bound_half, bound, value));
}

/**
 * binary_search_main - the binary search algorithm
 *
 * @array: pointer to the first element of the array
 * @low: lowest index
 * @high: highest index
 * @value: value to search for
 *
 * Return: index where the value is located or -1 if array is NULL
 * or value can't be found
 */
int binary_search_main(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	print_array_range(array, low, high);
	if (low == high && array[low] == value)
		return (low);
	while (low < high)
	{
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (value > array[mid])
			return (binary_search_main(array, mid + 1, high, value));
		else
			return (binary_search_main(array, low, mid - 1, value));
	}

	return (-1);
}

/**
 * print_array_range - prints an array in a specified index range
 *
 * @array: the array to print
 * @low: lowest index
 * @high: highest index
 *
 */
void print_array_range(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; ++i)
	{
		printf("%d", array[i]);
		if (i != high)
			printf(", ");
	}
	printf("\n");
}
