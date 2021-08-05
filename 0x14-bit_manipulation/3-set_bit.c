#include "main.h"

/**
 * set_bit - set bit at a specified index
 *
 * @num: the number to process
 * @index: the index to the set the bit at
 *
 * Return: 1 if it worked, -1 if an error occured
 */
int set_bit(unsigned long int *num, unsigned int index)
{
	if (index > 63)
		return (-1);

	*num |= (1 << index);

	return (1);
}
