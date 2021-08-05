#include "main.h"

/**
 * print_binary - print binary representation of a number
 *
 * @num: number to convert to binary
 *
 */
void print_binary(unsigned long int num)
{
	unsigned long int i;
	int found, size;

	if (num == 0)
	{
		_putchar('0');
		return;
	}

	found = 0;
	size = (sizeof(num) * 4) - 2;
	for (i = (1 << size); i > 0; i >>= 1)
	{
		if ((num & i))
		{
			if (!found)
				found = 1;
			_putchar('1');
		}
		else if (found)
		{
			_putchar('0');
		}
	}
}
