#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: Pointer to the head of the list.
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *l = head;

	while (l != NULL)
	{
		list_t *i = l;

		l = l->next;
		free(i->str);
		free(i);
	}
}
