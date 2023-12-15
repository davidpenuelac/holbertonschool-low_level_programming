#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *r;

	r = malloc(sizeof(dlistint_t));
	if (r == NULL)
		return (NULL);
	r->n = n;
	r->prev = NULL;
	r->next = *head;
	if (*head != NULL)
		(*head)->prev = r;
	*head = r;
	return (r);
}
