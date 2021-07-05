#include <stdio.h>
#include <stddef.h>
#include "holberton.h"

/**
 * print_chessboard - print a chess board
 *
 * @a: pointer to a multidimensional array
 *
 */
void print_chessboard(char (*a)[8])
{
	int i, j, size;

	size = 8;
	for (i = 0; i < size; ++i)
	{
		for (j = 0; j < size; ++j)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
