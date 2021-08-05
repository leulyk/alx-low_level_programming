#include "holberton.h"

/**
 * binary_to_uint - convert a binary number to unsigned int
 *
 * @bin: pointer to string of characters of 0 and 1
 *
 * Return: converted number, or 0 if
 *		- there is one or more chars in the string that is not 0 or 1
 *		- @bin is null
 */
unsigned int binary_to_uint(const char *bin)
{
	unsigned int decimal;

	if (!bin)
		return (0);
	decimal = 0;
	while (*bin)
	{
		if (*bin != '0' && *bin != '1')
			return (0);
		decimal = (2 * decimal) + (*bin - '0');
		bin++;
	}

	return (decimal);
}
