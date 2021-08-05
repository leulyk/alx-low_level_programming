#include "main.h"

/**
 * get_endianness - check the endianness of one's machine
 *
 * Return: 1 if it's little endian, 0 if it's big endian
 *
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *ch;

	ch = (char *)&i;
	if (*ch)
		return (1);
	return (0);
}
