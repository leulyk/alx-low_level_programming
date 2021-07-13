#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenate two strings
 * @s1: First string
 * @s2: Second string
 *
 * Desciption: treat null strings as empty
 *
 * Return: Pointer to new space in memory, NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, len1, len2, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = len1 = len2 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

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
