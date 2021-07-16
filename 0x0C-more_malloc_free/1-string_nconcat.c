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
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0, len2 = 0;
	while (*(s1 + len1))
		len1++;
	while (*(s2 + len2) && len2 < n)
		len2++;

	str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (str == NULL)
		return (NULL);

	i = 0;
	while (*(s1 + i))
	{
		*(str + i) = *(s1 + i);
		++i;
	}
	j = 0;
	while (j < len2)
	{
		*(str + i) = *(s2 + j);
		++i;
		++j;
	}
	*(str + i) = '\0';

	return (str);
}
