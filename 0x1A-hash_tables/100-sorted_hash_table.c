#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * shash_table_create - create a sorted hash table
 *
 * @size: size of the hash table
 *
 * Return: pointer to the new hash table, NULL if it fails
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->array = calloc(size, sizeof(shash_node_t *));
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->size = size;

	return (new_table);
}

/**
 * shash_table_set - add a new key/value pair to the hash table
 *
 * @ht: pointer to the hash table
 * @key: key to hash
 * @value: value associated with key
 *
 * Return: 1 if it suceeded, 0 if not
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node;
	unsigned long int index;
	shash_node_t *current;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key), new_node->value = strdup(value);
	if (!(new_node->key) || !(new_node->value))
		return (0);
	new_node->next = ht->array[index], ht->array[index] = new_node;
	if (ht->shead == NULL)
	{
		new_node->sprev = NULL, new_node->snext = NULL;
		ht->shead = ht->stail = new_node;
		return (1);
	}
	current = ht->shead;
	while (current)
	{
		if (strcmp(new_node->key, current->key) <= 0)
		{
			new_node->snext = current;
			new_node->sprev = current->sprev;
			if (current->sprev)
				current->sprev->snext = new_node;
			else
				ht->shead = new_node;
			return (1);
		}
		if (current->snext == NULL)
		{
			current->snext = new_node, new_node->sprev = current;
			new_node->snext = NULL, ht->stail = new_node;
			return (1);
		}
		current = current->snext;
	}
	return (0);
}

/**
 * shash_table_print - print the sorted hash table
 *
 * @ht: the hash table
 *
 * Description: print the sorted linked list
 *
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;
	int firstItemFound = 0;

	if (!ht)
		return;
	current = ht->shead;
	printf("{");
	while (current)
	{
		if (!firstItemFound)
			firstItemFound = 1;
		else
			printf(", ");
		printf("\'%s\': \'%s\'", current->key, current->value);
		current = current->snext;
	}
	printf("}\n");
}
