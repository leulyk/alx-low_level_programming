#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

hash_node_t *add_hashnode(hash_node_t *current, const char *key,
		const char *value);
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
	hash_node_t *newnode;
	unsigned long int index;
	char *val;

	if (key == NULL || strcmp(key, "") == 0)
		return (0);
	val = strdup(value);
	if (val == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	newnode = add_hashnode(ht->array[index], key, val);
	if (newnode == NULL)
		return (0);

	return (1);
}

/**
 * add_hashnode - add a new hash node to the hash table array
 *
 * @current: pointer to the current index in the array
 * @key: key to assign to the new node
 * @value: value of the new node
 *
 * Return: pointer to the new node, NULL if it fails
 *
 */
hash_node_t *add_hashnode(hash_node_t *current, const char *key,
		const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);
	new->key = strdup(key);
	if (new->key == NULL)
		return (0);
	new->value = (char *)value;
	if (!current)
		new->next = current;
	current = new;

	return (new);
}
