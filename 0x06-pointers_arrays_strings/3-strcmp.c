#include "holberton.h"

/**
 * _strcmp - compare two strings (exactly like the standard library function)
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 0 if strings are equal
 *         1 if the first unmatched character of s1 is greater than s2
 *         2 if the first unmatched character of s1 is less than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, result;

	result = 0;
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; ++i)
	{
		if (s1[i] == s2[i])
			continue;
		else if (s1[i] > s2[i])
			result = 1;
		else
			result = -1;
	}
	if (s1[i] != '\0')
		result = 1;
	else if (s2[i] != '\0')
		result = -1;
	return (result);
}
