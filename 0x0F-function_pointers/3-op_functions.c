#include "3-calc.h"

/**
 * op_add - add operation
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of the two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction operation
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of the two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication operation
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: product of the two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operation
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: quotient of the two integers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - division operation
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of the division of the two integers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
