#include "holberton.h"

/**
 * print_last_digit - print the last digit of an integer
 * @num: the number to be processed
 *
 * Return: last digit of num
 */
int print_last_digit(int num)
{
	int result;

	if (num >= 0)
		result = num % 10;
	else
		result = num % -10;
	_putchar('0' + result);
	return (result);
}
