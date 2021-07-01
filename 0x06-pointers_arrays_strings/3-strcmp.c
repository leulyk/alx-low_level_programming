#include "holberton.h"

/**
 * _strcmp - compare two strings (exactly like the standard library function)
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 0 if strings are equal
 *         >0 if the first unmatched character of s1 is greater than s2
 *         <0 if the first unmatched character of s1 is less than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; ++i)
	{
		if (s1[i] > s2[i])
			return (*s1 - *s2);
		else
			return (*s1 - *s2);
	}
	if (s1[i] != '\0')
		return (*s1);
	else if (s2[i] != '\0')
		return (*s2);
	return (0);
}
