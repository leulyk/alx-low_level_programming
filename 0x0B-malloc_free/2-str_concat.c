#include <stdlib.h>
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
	char *fullstr;
	int len1, len2, i, totallen;

	len1 = len2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s1 == NULL)
		s2 = "";
	while (*(s1 + len1++))
		;
	while (*(s2 + len2++))
		;
	totallen = len1 + len2;
	fullstr = malloc((totallen) * sizeof(char) + 1);
	if (fullstr == NULL)
		return (NULL);

	i = 0;
	while (*s1)
		*(fullstr + i++) = *s1++;
	while (*s2)
		*(fullstr + i++) = *s2++;

	return (fullstr);
}
