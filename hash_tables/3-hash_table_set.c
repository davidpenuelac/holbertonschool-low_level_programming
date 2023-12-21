#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * create_node - Creates a new hash node
 * @key: The key for the new node
 * @value: The value for the new node
 *
 * Return: A pointer to the new hash node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	return (new_node);
}

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table to which the element should be added
 * @key: The key of the element
 * @value: The value of the element
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current_node;

	if (!ht || !key || *key == '\0' || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	current_node = ht->array[index];
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			if (!current_node->value)
				return (0);
			return (1);
		}
		current_node = current_node->next;
	}
	new_node = create_node(key, value);
	if (!new_node)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

/**
 * print_hash_table - Print the contents of the hash table
 * @ht: The hash table to be printed
 *
 * Return: nothing
 */
void print_hash_table(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *c;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		c = ht->array[i];
		printf("[%lu]:", i);
		while (c)
		{
			printf(" {%s: %s}", c->key, c->value);
			c = c->next;
		}
		printf("\n");
	}
}
