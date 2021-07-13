#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * str_concat - concatenate two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Description: if NULL is passed, treat as empty string
 *
 * Return: pointer to a newly allocated string which contains contents
 *	   of @s1 followed by @s2, and null terminated, otherwise NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *fullstr, *empty;
	int len1, len2, i, j;

	empty = "";
	if (s1 == NULL)
		s1 = empty;
	if (s1 == NULL)
		s2 = empty;

	len1 = len2 = 0;
	while (s1[len1] != '\0')
		len1++;
	while (s1[len2] != '\0')
		len2++;

	fullstr = malloc(sizeof(*s1) * (len1 + len2 + 1));
	if (fullstr == NULL)
		return (NULL);

	i = j = 0;
	while (i < len1)
	{
		fullstr[i] = s1[i];
		++i;
	}
	while (j <= len2)
	{
		fullstr[i] = s2[j];
		++j;
		++i;
	}
	return (fullstr);
}
