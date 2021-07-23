#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_char(va_list list);
void print_int(va_list list);
void print_float(va_list list);
void print_string(va_list list);

/**
 * print_all - print different types of data types
 *
 * @format: the character string to specify which type to print
 *
 * Description: c - char
 *		i - integer
 *		f - float
 *		s - string
 *
 */
void print_all(const char *const format, ...)
{
	p_type print[] = {
		{ 'c', print_char },
		{ 'i', print_int },
		{ 'f', print_float },
		{ 's', print_string },
		{ 0, NULL }
	};
	va_list list;
	int i, j;
	char *sep = "";

	va_start(list, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (print[j].arg)
		{
			if (format[j] == print[i].arg)
			{
				printf("%s", sep);
				print[i].print_func(list);
				sep = ", ";
				break;
			}
			++j;
		}
		++i;
	}
	printf("\n");
	va_end(list);
}

/**
 * print_char - print a character
 *
 * @list: a variable list argument
 *
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_int - print an integer
 *
 * @list: a variable list argument
 *
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - print a float
 *
 * @list: a variable list argument
 *
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_string - print a character string
 *
 * @list: a variable list argument
 *
 */
void print_string(va_list list)
{
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
