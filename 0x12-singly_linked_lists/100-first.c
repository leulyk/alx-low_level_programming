#include <stdio.h>
#include "lists.h"

/**
 * print_first - a function to be executed before main
 *
 */
__attribute__ ((__constructor__))
void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
