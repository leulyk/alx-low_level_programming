#include "function_pointers.h"

/**
 * print_name - print a string provided
 *
 * @name: the string (a name in this case) to print
 * @func: pointer to a function that accepts a string as argument
 * and returns void
 *
 */
void print_name(char *name, void (*func)(char *))
{
	if (name && func)
		func(name);
}
