#include <stdio.h>

/**
 * main - Entry point
 * Description: print all possible combination of two two-digit numbers
 * Return: 0 (success)
 */
int main(void)
{
	int i, j, k, l;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 8)
		{
			k = i;
			while (k <= 9)
			{
				l = j;
				while (l <= 9)
				{
					if (!(i == k && j == l))
					{
						putchar((i % 100) + '0');
						putchar((j % 100) + '0');
						putchar(' ');
						putchar((k % 100) + '0');
						putchar((l % 100) + '0');
						if (!(j == 8 && i == 9))
						{
							putchar(',');
							putchar(' ');
						}
					}
					++l;
				}
				++k;
			}
			++j;
		}
		++i;
	}
	putchar('\n');
	return (0);
}
