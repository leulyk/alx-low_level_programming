#include "holberton.h"

#define IN 1
#define OUT 0

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
	int i, state;

	state = IN;
	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == '.' || str[i] == ',' || str[i] == ';' ||
			str[i] == '!' || str[i] == '?' || str[i] == '\"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '{')
		{
			state = OUT;
		}
		else
		{
			if (state == OUT)
			{
				state = IN;
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] -= 32;
				}
			}
		}
	}
	return (str);
}
