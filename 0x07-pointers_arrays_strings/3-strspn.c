#include "holberton.h"

/**
 * _strspn - get length of prefix substring
 *
 * Description: return length of bytes of string which consist
 * entirely of bytes in a specific set of characters
 *
 * @str: string to check
 * @accept: array of bytes acceptable
 *
 * Return: the number of bytes in the initial segment of @str which
 * consist only bytes from @accept
 */
unsigned int _strspn(char *str, char *accept)
{
	unsigned int i, j;
	int found;

	for (i = 0; *(str + i) != '\0'; ++i)
	{
		found = 0;
		for (j = 0; *(accept + j) != '\0'; ++j)
		{
			if (*(str + i) == *(accept + j))
			{
				found = 1;
				break;
			}
		}
		if (!found)
			return (i);
	}
	return (0);
}
