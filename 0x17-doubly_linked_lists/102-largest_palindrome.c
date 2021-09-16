#include <stdio.h>
#include <string.h>

int is_palindrome(char *str);

/**
 * main - Entry point
 *
 * Description: find the largest numbers which is a palindrome and is a
 * product of two 3 digit numbers
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	char str[7];
	int i, j, max;

	max = 1;
	for (i = 100; i <= 999; ++i)
	{
		for (j = 100; j <= 999; ++j)
		{
			sprintf(str, "%d", i * j);
			if (is_palindrome(str))
			{
				printf("Found: %d * %d = %d\n", i, j, i * j);
				if (i * j > max)
					max = i * j;
			}
		}
	}
	printf("The largest palindrome is: %d\n", max);


	return (0);
}

/**
 * is_palindrome - check whether a string is a palindrome
 *
 * @str: the string to check
 *
 * Return: 1 if it's a palindrome, 0 if not
 */
int is_palindrome(char *str)
{
	size_t i;

	for (i = 0; i < strlen(str) / 2; ++i)
		if (str[i] != str[strlen(str) - i - 1])
			return (0);
	return (1);
}
