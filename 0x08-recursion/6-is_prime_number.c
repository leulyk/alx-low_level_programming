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
 * Return: 0 if number is less than 2 or not prime, otherwise 1
 */
int is_prime_number(int num)
{
	if (num <= 1)
		return (0);
	return (check_prime(num, 2));
}
