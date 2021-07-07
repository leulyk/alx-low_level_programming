#include "holberton.h"

/**
 * _pow_recursion - compute power of a base to its exponent
 *
 * @x: the base
 * @y: the exponent
 *
 * Return: x to the power of y, if y greater or equal to 0, otherwise -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
