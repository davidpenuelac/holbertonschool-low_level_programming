#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array
 *
 * Return: mew hash table, or NULL if something wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *n = NULL;
	unsigned long int i = 0;

	if (size < 1)
		return (NULL);
	n = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (n == NULL)
		return (NULL);
	n->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (n->array == NULL)
	{
		free(n);
		return (NULL);
	}
	while (i < size)
	{
		n->array[i] = NULL;
		i++;
	}
	n->size = size;
	return (n);
}
