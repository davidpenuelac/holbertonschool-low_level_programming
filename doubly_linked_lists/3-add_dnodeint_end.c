#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>



dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *i, *c;

	i = malloc(sizeof(dlistint_t));
	if (i == NULL)
		return (NULL);
	i->n = n;
	i->next = NULL;
	if (*head == NULL)
	{
		i->prev = NULL;
		*head = i;
	}
	else
	{
		c = *head;
		while (c->next != NULL)
			c = c->next;
		c->next = i;
		i->prev = c;
	}
	return (i);
}
