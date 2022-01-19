#include <stdio.h>
#include "search_algos.h"

int binary_search_main(int *array, size_t low, size_t high, int value);
void print_array_range(int *array, size_t low, size_t high);

/**
 * binary_search - search for a number in an array of integers
 * using the binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: the value to search for
 *
 * Return: index where the value is located or -1 if array is NULL
 * or value can't be found
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (binary_search_main(array, 0, size - 1, value));
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
