#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - find the index of a key
 *
 * @key: the key
 * @size: the size of the array of the hash table
 *
 * Description: uses the djb2 algorithm
 *
 * Return: the key/value pair should be stored in the array
 * of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
