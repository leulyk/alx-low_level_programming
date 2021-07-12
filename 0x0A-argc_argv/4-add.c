#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * @argc: the argument count
 * @argv: the arguments as string array
 *
 * Description: print positive integers
 *
 * Return: 0 (success), 1 (if no argument provided
 * or if a symbol which is not a digit found)
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	for (i = 1; i < argc; ++i)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
