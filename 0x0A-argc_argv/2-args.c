#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * @argc: command line argument count
 * @argv: arguments as array of strings
 *
 * Description: print command line arguments
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; ++i)
		printf("%s\n", argv[i]);
	return (0);
}
