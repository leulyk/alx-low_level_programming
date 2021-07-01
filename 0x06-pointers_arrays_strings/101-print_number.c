#include "holberton.h"

unsigned int _pow(int base, int exponent);

/**
 * print_number - print an integer using _putchar() function from a string
 *
 * @n: the number to be printed
 *
 */
void print_number(int n)
{
	unsigned int num, ntemp;
	int degree, digit;

	num = n;
	if (n < 0)
	{
		num = -num;
		_putchar('-');
	}
	ntemp = num;
	degree = 0;
	while (ntemp >= 10)
	{
		ntemp /= 10;
		++degree;
	}
	while (degree >= 1)
	{
		digit = (num / _pow(10, degree)) % 10;
		_putchar('0' + digit);
		--degree;
	}
	_putchar('0' + num % 10);
}
/**
 * _pow - compute the power the a base to its exponent
 *
 * @base: the base
 * @exponent: the exponent
 *
 * Return: the result as an unsigned integer
 */
unsigned int _pow(int base, int exponent)
{
	unsigned int result;
	int i;

	i = 1, result = 1;
	while (i++ <= exponent)
		result *= base;
	return (result);
}
