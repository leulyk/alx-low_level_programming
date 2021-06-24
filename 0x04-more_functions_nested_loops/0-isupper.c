#include <stdio.h>
#include "holberton.h"

/**
 * _isupper - check whether a character is uppercase or not
 * @c: character to be checked
 * Return: 1 if it's uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
