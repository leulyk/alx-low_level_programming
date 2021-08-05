#include "main.h"

/**
 * clear_bit - set a bit at a specified position to 0
 *
 * @num: pointer to an integer
 * @index: index to set bit
 *
 * Return: 1 if it worked, otherwise -1
 *
 */
int clear_bit(unsigned long int *num, unsigned int index)
{
	if (index > 63)
		return (-1);

	*num &= ~(1 << index);

	return (1);
}
