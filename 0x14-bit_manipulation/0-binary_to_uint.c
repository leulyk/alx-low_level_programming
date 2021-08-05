#include "main.h"

int _strlen(const char *str);

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
	unsigned int decimal, index;
	int length;

	if (!bin)
		return (0);
	index = decimal = 0;
	length = _strlen(bin) - 1;
	while (length >= 0)
	{
		if (*(bin + length) != '0' && *(bin + length) != '1')
			return (0);
		decimal |= (*(bin + length) - '0') << index;
		index++;
		length--;
	}

	return (decimal);
}

/**
 * _strlen - compute the length of a string
 *
 * @str: the string to process
 *
 * Return: length of the string
 */
int _strlen(const char *str)
{
	int length;

	for (length = 0; *(str + length); ++length)
		;
	return (length);
}
