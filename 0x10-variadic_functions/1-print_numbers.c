#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_numbers - print variable number of integers using a separator
 *
 * @separator: the character to print in between integers
 * @n: number of arguments
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	if (separator != NULL)
	{
		va_start(list, n);
		for (i = 0; i < n; ++i)
		{
			printf("%d", va_arg(list, int));
			if (i != n - 1)
				printf(", ");
		}
		printf("\n");
		va_end(list);
	}
}
