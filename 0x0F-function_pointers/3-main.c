#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

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

	if (argc != 4 || (argv[2][0] != '*' && argv[2][0] != '+' &&
		argv[2][0] != '/' && argv[2][0] != '-' && argv[2][0] != '%'))
	{
		printf("Error\n");
		return (1);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		return (2);
	}
	result = 0;
	func = get_op_func(argv[2]);
	if (func != 0)
	{
		result = func(atoi(argv[1]), atoi(argv[3]));
		printf("%d\n", result);
	}

	return (0);
}
