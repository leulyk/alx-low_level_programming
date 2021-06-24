#include <stdio.h>

/**
 * main - implement the Fizz Buzz program
 *
 * Description: print Fizz for multiples of 3 and Buzz for multiples
 * of 5, and FizzBuzz for multiples of both
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	i = 1;
	printf("%d", i);
	for (i = 2; i <= 100; ++i)
	{
		printf(" ");
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0)
				printf("Fizz");
			if (i % 5 == 0)
				printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}
