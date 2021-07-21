#include "3-calc.h"
#include <stddef.h>

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

	i = 0;
	while ((ops[i]).op != NULL)
	{
		if (ops[i].op[0] == s[0])
			return ((ops[i]).f);
		++i;
	}
	return (NULL);
}
