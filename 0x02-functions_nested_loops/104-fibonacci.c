#include <stdio.h>

/**
 * main - Entry point (code not working)
 *
 * Description: print the first 98 fibonacci numbers
 * without using long long, malloc, pointers, arrays or structures
 *
 * Return: 0 (success)
 */
int main(void)
{
	long double prev, curr, temp;
	int i;

	prev = 1;
	curr = 2;
	i = 1;
	printf("%.0Lf, %.0Lf, ", prev, curr);
	while (i <= 96)
	{
		temp = curr;
		curr += prev;
		prev = temp;
		printf("%.0Lf", curr);
		if (i != 96)
			printf(", ");
		++i;
	}
	printf("\n");
	return (0);
}
