#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print a variable number of strings
 *
 * @separator: the character separator to print between the strings
 * @n: number of string arguments
 *
 * Description: if separator is NULL, don't print it
 *		if one of the strings is null, print (nil) insted
 *		print a new line at the end of the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; ++i)
	{
		str = va_arg(list, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
