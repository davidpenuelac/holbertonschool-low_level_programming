#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to be deleted
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node, *next_node;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		c = ht->array[i];
		while (c)
		{
			next_node = c->next;
			free(c->key);
			free(c->value);
			free(c);
			c = next_node;
		}
	}
	free(ht->array);
	free(ht);
}
