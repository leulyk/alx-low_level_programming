#include "holberton.h"

/**
 * leet - encode a string into 1337
 *
 * @str: the string to be processed
 * Description:
 *	Letters a and A should be replaced by 4
 *	Letters e and E should be replaced by 3
 *	Letters o and O should be replaced by 0
 *	Letters t and T should be replaced by 7
 *	Letters l and L should be replaced by 1
 *
 * Return: resultant string
 */
char *leet(char *str)
{
	char ch[] = "aAeEoOtTlL";
	char leet[] = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; ++i)
	{
		for (j = 0; ch[j] != '\0'; ++j)
		{
			if (str[i] == ch[j])
			{
				str[i] = leet[j];
				break;
			}
		}
	}
	return (str);
}
