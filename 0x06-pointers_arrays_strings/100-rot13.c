#include "holberton.h"

/**
 * rot13 - encode a string using rot13
 *
 * @str: the string to be encodes
 *
 * Description: encode a string using a substitution cipher
 * which rotates a character in the alphabet by 13 places
 *
 * Return: the encoded string
 */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if ((str[i] >= 'a' && str[i] <= 'm') ||
			(str[i] >= 'A' && str[i] <= 'M'))
		{
			str[i] += 13;
		}
		else if ((str[i] >= 'n' && str[i] <= 'z') ||
			(str[i] >= 'N' && str[i] <= 'Z'))
		{
			str[i] -= 13;
		}
	}
	return (str);
}
