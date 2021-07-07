#include "holberton.h"

int check_palindrome(char *s, int low, int high);

/**
 * is_palindrome - check whether a string is a palindrome
 *
 * @s: the character string to process
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	return (check_palindrome(s, 0, _strlen_recursion(s) - 1));
}

/**
 * check_palindrome - check whether a string is a palindrome
 *
 * @s: the character string to process
 * @low: the starting index of the string
 * @high: the last index of the string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int low, int high)
{
	if (low > high)
		return (1);
	if (s[low] != s[high])
		return (0);
	return (check_palindrome(s, low + 1, high - 1));
}

/**
 * _strlen_recursion - compute the length of a string
 *
 * @s: the string to be processed
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int length = 1;

	if (*s == '\0')
		return (0);
	return (length + _strlen_recursion(s + 1));
}
