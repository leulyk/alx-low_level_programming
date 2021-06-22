#include <stdio.h>
#include "holberton.h"

/**
 * times_table - print the 9 times table, starting from 0
 *
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			product = i * j;
			printf("%3d", product);
			if (j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
