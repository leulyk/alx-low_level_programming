#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_numbers - print a variable number of integers using a separator
 *
 * @separator: the string separator to print in between the integers
 * @n: number of integers
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; ++i)
	{
		printf("%d", va_arg(list, int));
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
