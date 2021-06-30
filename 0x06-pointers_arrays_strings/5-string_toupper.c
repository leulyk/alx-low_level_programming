#include "holberton.h"

/**
 * string_toupper - change all lowercase letters in a string to uppercase
 *
 * @str: the string to processed
 *
 * Return: the resultant string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
