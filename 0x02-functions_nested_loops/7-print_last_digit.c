#include "holberton.h"

/**
 * print_last_digit - print the last digit of an integer
 * @num: the number to be processed
 *
 * Return: last digit of num
 */
int print_last_digit(int num)
{
	if (num >= 0)
		return (num % 10);
	else
		return (-num % 10);
}
