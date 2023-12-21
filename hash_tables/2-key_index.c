#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - Calculates the index at which a key/value pair should be stored
 * @key: The key
 * @size: The size of the array of the hash table
 *
 * Return: The index at which the key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hv = hash_djb2(key);
	unsigned long int i = hv % size;

	return (i);
}
