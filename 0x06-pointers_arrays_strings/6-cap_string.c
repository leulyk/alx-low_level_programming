#include "holberton.h"

/**
 * cap_string - capitalize all words of a string
 *
 * @str: string to be processed
 *
 * Description: use the following as separators of words
 *              space, tab, new line or from the set ,.;!?"(){}
 *
 * Return: the resultant string
 */
char *cap_string(char *str)
{
	int i, j;

	for (j = 1; str[i] != '\0'; ++j)
	{
		i = j - 1;
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '.' ||
			str[i] == ',' || str[i] == ';' || str[i] == '!' || str[i] == '?' ||
				str[i] == '\"' || str[i] == '(' || str[i] == ')' || str[i] == '{' ||
					str[i] == '{')
		{
			if (str[j] >= 'a' && str[i] <= 'z')
				str[j] -= 32;
		}		
	}
	return (str);
}
