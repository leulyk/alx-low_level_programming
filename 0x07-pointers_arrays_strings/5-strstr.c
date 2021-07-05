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
	int i, j, index;

	for (i = 0; *(haystack + i) != '\0'; ++i)
	{
		if (*(haystack + i) == *(needle))
		{
			index = i++;
			for (j = 1; *(needle + j) != '\0' &&
				(*(haystack + i) == *(needle + j)); ++i, ++j)
				;
			if (*(needle + j) == '\0')
				return (haystack + index);
		}
	}
	return (NULL);
}
