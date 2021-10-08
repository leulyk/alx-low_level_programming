#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: the hash table
 *
 * Description: print order - array, list
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current;
	int firstFound = 0;

	if (!ht)
		return;

	printf("{");
	for (index = 0; index < ht->size; ++index)
	{
		current = ht->array[index];
		while (current)
		{
			if (!firstFound)
				firstFound = 1;
			else
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
		}
	}
	printf("}\n");
}
