#include "holberton.h"

/**
 * _abs - print the absolute value of a number
 * @num: the number to be checked
 *
 * Return: the absolute value of num
 */
int _abs(int num)
{
	if (num >= 0)
		return (num);
	else
		return (-num);
}
