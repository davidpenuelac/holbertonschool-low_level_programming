#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head of the list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *c = head;

	while (c != NULL)
	{
		dlistint_t *i = c;

		c = c->next;
		free(i);
	}
}
