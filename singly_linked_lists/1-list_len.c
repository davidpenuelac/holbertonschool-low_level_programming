#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: number of elements in a linked list_t list.
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
