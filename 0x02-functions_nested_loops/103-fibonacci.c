#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the sum of even numbers below 4,000,000
 * in the fibonacci sequence
 *
 * Return: 0 (success)
 */
int main(void)
{
	long prev, curr, temp, evensum;

	curr = evensum = 2;
	prev = 1;
	while (curr < 4000000)
	{
		temp = curr;
		curr += prev;
		prev = temp;
		if (curr % 2 == 0)
			evensum += curr;
	}
	printf("%ld\n", evensum);
	return (0);
}
