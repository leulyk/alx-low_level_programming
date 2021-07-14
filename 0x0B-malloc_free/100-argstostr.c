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

	k = len = 0;
	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; ++i)
	{
		for (j = 0; av[i][j]; ++j)
			len++;
		len++;
	}
	len++;
	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; ++i)
	{
		for (j = 0; av[i][j]; ++j)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
