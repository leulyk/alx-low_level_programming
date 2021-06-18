#include <stdio.h>

/**
 * main - Entry point
 * Description: print all possible combinations of three digits
 * Return: 0 (success)
 */
int main(void)
{
	int num1, num2, num3;

	num1 = 48;
	while (num1 <= 55)
	{
		num2 = num1 + 1;
		while (num2 <= 56)
		{
			num3 = num2 + 1;
			while (num3 <= 57)
			{
				putchar((char)num1);
				putchar((char)num2);
				putchar((char)num3);
				if (num1 != 55)
				{
					putchar(',');
					putchar(' ');
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
