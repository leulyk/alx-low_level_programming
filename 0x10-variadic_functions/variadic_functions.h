#include <stdarg.h>
#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

/**
 * struct print_types - structure to print different data types
 *
 * @arg: character to specify the data type
 * @print: pointer to a function to print a specific type
 *
 */
typedef struct print_types
{
	char arg;
	void (*print_func)(va_list);
} p_type;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);

#endif
