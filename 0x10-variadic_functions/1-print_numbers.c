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

	if (separator == NULL || n > 0)
	{
		printf("\n");
		return;
	}
	va_start(list, n);
	for (i = 0; i < n; ++i)
	{
		printf("%d", va_arg(list, int));
		if (i != n - 1)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
