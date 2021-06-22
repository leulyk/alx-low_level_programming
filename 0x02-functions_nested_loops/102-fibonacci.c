#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the first 100 fibonacci numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	long prev, curr, temp;
	int i;

	i = 1;
	prev = 1;
	curr = 2;
	printf("%ld, %ld, ", prev, curr);
	while (i <= 48)
	{
		temp = curr;
		curr += prev;
		prev = temp;
		printf("%ld", curr);
		if (i != 48)
			printf(", ");
		++i;
	}
	printf("\n");
	return (0);
}
