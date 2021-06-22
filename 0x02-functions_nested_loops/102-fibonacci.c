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
	long long prev, curr, temp;
	int i;

	i = 1;
	prev = 1;
	curr = 2;
	printf("%lld, %lld, ", prev, curr);
	while (i <= 98)
	{
		temp = curr;
		curr += prev;
		prev = temp;
		printf("%lld", curr);
		if (i != 98)
			printf(", ");
		++i;
	}
	printf("\n");
	return (0);
}
