#include "holberton.h"

/**
 * factorial - computer the factorial of a number
 *
 * @num: the number to compute
 *
 * Return: the factorial if @num is greater or equal to 0, otherwise -1
 */
int factorial(int num)
{
	if (num < 0)
		return (-1);
	else if (num == 0 || num == 1)
		return (1);
	else
		return (num * factorial(num - 1));
}
