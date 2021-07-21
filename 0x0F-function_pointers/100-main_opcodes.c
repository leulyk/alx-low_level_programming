#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: command line argument count
 * @argv: command line arguments as string array
 *
 * Description: write a program that prints out specific bytes of the
 * opcodes of its main program
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int nbytes, i;
	int (*ptr)(int, char **);
	char *bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	nbytes = atoi(argv[1]);
	if (nbytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	ptr = &main;
	bytes = (char *)ptr;
	for (i = 0; i < nbytes; ++i)
	{
		printf("%02x", bytes[i] & 0xff);
		if (i != nbytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
