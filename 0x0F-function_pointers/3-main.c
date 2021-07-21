#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: array of command line arguments
 *
 * Description: perform a mathematical operation
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int result;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][0] != '*' && argv[2][0] != '+' &&
		argv[2][0] != '/' && argv[2][0] != '-' && argv[2][0] != '%')
			|| strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = 0;
	func = get_op_func(argv[2]);
	result = func(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);

	return (0);
}
