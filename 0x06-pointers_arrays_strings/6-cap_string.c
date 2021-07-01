#include "holberton.h"

int is_separator(char ch);
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

	for (j = 0; str[j] != '\0'; ++j)
	{
		i = j - 1;
		if (is_separator(str[i]))
		{
			if (str[j] >= 'a' && str[i] <= 'z')
				str[j] -= 32;
		}		
	}
	return (str);
}

/**
 * is_separator - check whether a character is a separator
 *
 * @ch: the character to be checked
 *
 * Return: 1 if it's a separator, otherwise 0
 */
int is_separator(char ch)
{
	char separators[] = " \n\t.,;!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; ++i)
	{
		if (separators[i] == ch)
			return (1);
	}
	return (0);
}
