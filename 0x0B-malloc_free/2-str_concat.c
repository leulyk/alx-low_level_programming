#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Desciption: treat null strings as empty
 *
 * Return: pointer to concatenated string, NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	len1 = len2 = 0;
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	str = malloc((len1 + len2 + 1) * sizeof(*s1));
	if (str == NULL)
		return (NULL);

	i = 0;
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (j <= len2)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	return (str);
}
