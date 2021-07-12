#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: arguments as array of strings
 *
 * Description: print the number of arguments
 *
 * Return: 0 (success)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
