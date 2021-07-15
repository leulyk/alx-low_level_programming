#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - concatenate two strings
 *
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes from @s2 to join with @s1
 *
 * Description: if NULL is passed, treat as empty string
 *		if @n > length of @s2, take the whole string
 *
 * Return: pointer to the concatenated string, otherwise NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *s;
	char *nul = "";

	if (s1 == NULL)
		s1 = nul;
	if (s2 == NULL)
		s2 = nul;

	len1 = 0, len2 = 0;
	while (*(s1 + len1))
		len1++;
	while (*(s2 + len2))
		len2++;

	if (n < len2)
		len2 = n;

	s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (s == 0)
		return (0);

	for (i = 0; i < len1; i++)
		*(s + i) = *(s1 + i);

	for (i = 0, j = len1; i <= len2; j++, i++)
		*(s + j) = *(s2 + i);
	*(s + j) = '\0';

	return (s);
}
