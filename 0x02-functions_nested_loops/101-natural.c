#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the sum of all natural numbers below 1024
 * which are multiples of 3 or 5
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 1; i < 1024; ++i)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
