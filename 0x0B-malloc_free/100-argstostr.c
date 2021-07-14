#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - concatenate all arguments into a string
 *
 * @ac: argument count
 * @av: arguments as string array
 *
 * Return: pointer to the concatenated string
 *	   NULL if @ac == 0 or @av == NULL, or memory allocation fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; ++i)
	{
		for (j = 0; av[i][j]; ++j)
			len++;
		len++;
	}

	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; ++i)
	{
		for (j = 0; av[i][j]; ++j)
			*(str + k++) = av[i][j];
		*(str + k++) = '\n';
	}
	*(str + k) = '\0';

	return (str);
}
