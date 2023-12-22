#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: The hash table to look into
 * @key: The key to look for
 *
 * Return: The value associated with the key, or NULL if wrong
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *c;

	if (!ht || !key || *key == '\0')
		return (NULL);
	i = key_index((unsigned char *)key, ht->size);
	c = ht->array[i];
	while (c)
	{
		if (strcmp(c->key, key) == 0)
			return (c->value);
		c = c->next;
	}
	return (NULL);
}
