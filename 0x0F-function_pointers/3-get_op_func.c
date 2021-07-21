#include "3-calc.h"
#include <stddef.h>

int _strcmp(char *s1, char *s2);

/**
 * get_op_func - return a function to compute an operation on two integers
 *
 * @s: the operand
 *
 * Return: pointer to a function that executes the operation specified by @s
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	if (s == 0)
		return (0);
	i = 0;
	while ((ops[i]).op != NULL)
	{
		if (!(_strcmp(ops[i].op, s)))
			return ((ops[i]).f);
		++i;
	}
	return (0);
}

/**
 * _strcmp - compare two strings (exactly like the standard library function)
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 0 if strings are equal otherwise the difference between the strings
 */
int _strcmp(char *s1, char *s2)
{
	for (; *s1 != '\0' && *s2 != '\0'; ++s1, ++s2)
		if (*s1 != *s2)
			return (*s1 - *s2);

	if (*s1 != '\0')
		return (*s1);
	else if (*s2 != '\0')
		return (*s2);

	return (0);
}
