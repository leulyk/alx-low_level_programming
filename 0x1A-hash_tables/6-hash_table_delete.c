#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - free a hash table
 *
 * @ht: the hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *current, *temp;

	if (!ht)
		return;
	for (idx = 0; idx < ht->size; ++idx)
	{
		current = ht->array[idx];
		while (current)
		{
			temp = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = temp;
		}
	}
	free(ht->array);
	free(ht);
}
