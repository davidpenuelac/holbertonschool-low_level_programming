#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the pointer of the head of the list.
 * @idx: Index where the new node should be added.
 * @n: Integer value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *l, *c = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	l = malloc(sizeof(dlistint_t));
	if (l == NULL)
		return (NULL);
	l->n = n;
	if (idx == 0)
	{
		l->prev = NULL;
		l->next = *h;
		if (*h != NULL)
			(*h)->prev = l;
		*h = l;
		return (l);
	}
	while ((c != NULL) && (i < idx - 1))
	{
		c = c->next;
		i++;
	}
	if (c == NULL)
		return (NULL);
	l->prev = c;
	l->next = c->next;
	if (c->next != NULL)
		c->next->prev = l;
	return (l);
}
