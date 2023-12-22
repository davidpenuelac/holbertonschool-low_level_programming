#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints the contents of the hash table
 * @ht: The hash table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *c;
	int first = 1;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		c = ht->array[i];
		while (c)
		{
			if (!first)
				printf(", ");
			else
				first = 0;
			printf("'%s': '%s'", c->key, c->value);
			c = c->next;
		}
	}
	printf("}\n");
}
