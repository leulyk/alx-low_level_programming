#include "main.h"

/**
 * flip_bits - compute the number of bits needed to flip to get from one
 * number to another
 *
 * @num1: first number
 * @num2: second numer
 *
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int num1, unsigned long int num2)
{
	int index, bit1, bit2, count;

	count = 0;
	for (index = 31; index >= 0; --index)
	{
		bit1 = (num1 & (1 << index)) != 0;
		bit2 = (num2 & (1 << index)) != 0;
		if (bit1 != bit2)
			count++;
	}
	return (count);
}
