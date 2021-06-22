#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the first 98 fibonacci numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	double prev, curr, temp;
	int i;

	i = 1;
	prev = 1;
	curr = 2;
	printf("%.0f, %.0f, ", prev, curr);
	while (i <= 96)
	{
		temp = curr;
		curr += prev;
		prev = temp;
		printf("%.0f", curr);
		if (i != 96)
			printf(", ");
		++i;
	}
	printf("\n");
	return (0);
}
