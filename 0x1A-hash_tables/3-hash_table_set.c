#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: pointer to the hash table
 * @key: key to hash
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode, *current;
	unsigned long int index;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}

	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);

	newnode->key = strdup(key);
	newnode->value = strdup(value);
	if (!(newnode->key) || !(newnode->value))
	{
		free(newnode);
		return (0);
	}

	if (ht->array[index])
		newnode->next = ht->array[index];
	ht->array[index] = newnode;

	return (1);
}
