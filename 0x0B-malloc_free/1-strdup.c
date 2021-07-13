#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - duplicate a string
 *
 * @str: the string to copy
 *
 * Return: pointer to the newly allocated space in memory,
 *	   NULL if @str is null, or insufficient memory available
 */
char *_strdup(char *str)
{
	char *newstr;
	int i;

	if (str == NULL)
		return (NULL);
	newstr = malloc(sizeof(str));
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (*(str + i))
	{
		*(newstr + i) = *(str + i);
		++i;
	}
	*(newstr + i) = '\0';
	return (newstr);
}
