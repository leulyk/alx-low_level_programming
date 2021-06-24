#include "holberton.h"

/**
 * more_numbers - print 0 to 14, 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; ++i)
	{
		for (j = 0; j <= 14; ++j)
		{
			if (j >= 10)
				_putchar('0' + 1);
			_putchar('0' + (j % 10));
		}
		_putchar('\n');
	}
}
