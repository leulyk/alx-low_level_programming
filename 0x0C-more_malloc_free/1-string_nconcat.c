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
	char *fullstr;
	unsigned int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = len2 = 0;
	while (*(s1 + len1))
		++len1;
	while (*(s2 + len2) && len2 < n)
		++len2;
	fullstr = malloc((len1 + len2 + 2) * sizeof(char));
	if (fullstr == NULL)
		return (NULL);

	i = 0;
	while (i < len1)
	{
		fullstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (j <= len2)
		fullstr[i++] = s2[j++];
	fullstr[i] = '\0';

	return (fullstr);
}
