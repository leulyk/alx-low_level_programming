#include "main.h"

/**
 * get_bit - get the bit a specified index
 *
 * @num: number to get the bit from
 * @index: index of the bit to get
 *
 * Return: value of the bit at index, otherwise -1
 */
int get_bit(unsigned long int num, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);
	mask = 1 << index;

	return ((num & mask) != 0);
}
