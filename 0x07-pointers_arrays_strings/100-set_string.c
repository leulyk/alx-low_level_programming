#include "holberton.h"

/**
 * set_string - set the value of a pointer to a char
 *
 * @s: the pointer to a pointer of a char to change the value
 * @to: the character to change to
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}
