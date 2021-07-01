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
	int temp, degree, digit, last;

	degree = 0;
	last = n % 10;
	if (last < 0)
		last *= -1;
	n /= 10;
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	temp = n;
	while (temp >= 10)
	{
		temp /= 10;
		++degree;
	}
	while (degree >= 1)
	{
		digit = (n / _pow(10, degree)) % 10;
		if (digit < 0)
			digit *= -1;
		_putchar('0' + digit);
		--degree;
	}
	_putchar('0' + (n % 10));	
	if (n != 0)
		_putchar('0' + last);
}

/**
 * pow - compute the power the a base to its exponent
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
