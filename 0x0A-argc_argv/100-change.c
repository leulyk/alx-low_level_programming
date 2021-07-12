#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - entry point
 *
 * @argc: number of command line arguments
 * @argv: arguments as string arrays
 *
 * Description: compute the minimum number of coins to make change
 * for an amount of money
 *
 * Return: 0 (success), 1 (failure - if no arguments passed)
 */
int main(int argc, char *argv[])
{
	int coins[5] = { 25, 10, 5, 2, 1 };
	int total, i, val;

	total = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	val = atoi(argv[1]);
	if (val < 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < 5; ++i)
		{
			total += (val / coins[i]);
			val %= coins[i];
			if (val == 0)
				break;
		}
		printf("%d\n", total);
	}
	return (0);
}
