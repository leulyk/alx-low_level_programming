#include <stddef.h>
#include "holberton.h"

/**
 * _strstr - locate a substring
 *
 * @haystack: the string to look for a substring
 * @needle: the substring
 *
 * Return: first occurrence of the substring, if not found NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = j = 0;
	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
				break;
			++j;
		}
		if (needle[j] == '\0')
			return (haystack + i);
		j = 0;
		++i;
	}
	return (NULL);
}
