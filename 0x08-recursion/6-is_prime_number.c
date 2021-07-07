#include "holberton.h"

/**
 * check_prime - check whether a number is prime
 *
 * @num: the number to check
 * @i: the number to divide @num with
 *
 * Return: 1 if number is prime, 0 otherwise
 */
int check_prime(int num, int i)
{
	if (i * i > num)
		return (1);
	else if (num % i == 0)
		return (0);
	return (check_prime(num, i + 1));
}

/**
 * is_prime_number - check whether a number is prime
 *
 * @num: the number to check
 *
 * Return: result of check_prime
 */
int is_prime_number(int num)
{
	if (num <= 1)
		return (0);
	return (check_prime(num, 2));
}
