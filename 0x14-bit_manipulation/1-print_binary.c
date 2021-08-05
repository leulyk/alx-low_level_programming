#include "main.h"

/**
 * print_binary - print binary representation of a number
 *
 * @num: number to convert to binary
 *
 */
void print_binary(unsigned long int num)
{
	int i, found;

	if (num == 0)
	{
		_putchar('0');
		return;
	}

	found = 0;
	for (i = (1 << 30); i > 0; i /= 2)
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
