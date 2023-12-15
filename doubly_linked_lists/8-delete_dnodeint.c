#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a given index.
 * @head: Pointer to the pointer of the head of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *n = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(n);
		return (1);
	}
	while ((n != NULL) && (i < index))
	{
		n = n->next;
		i++;
	}
	if (n == NULL)
		return (-1);
	if (n->next != NULL)
		n->next->prev = n->prev;
	free(n);
	return (1);
}
