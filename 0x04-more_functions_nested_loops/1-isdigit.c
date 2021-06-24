#include "holberton.h"

/**
 * isdigit - check whether a character is a digit or not
 * @c: character to be checked
 * Return: 1 if it's a digit, otherwise 0
 */
int isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
