#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to the pointer of the head of the list.
 * @n: Integer value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

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
