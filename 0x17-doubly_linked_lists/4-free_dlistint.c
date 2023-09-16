#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr, *tmp;

	curr = head;
	while (curr != NULL)
	{
		tmp = curr;
		curr = curr->next;
		free(tmp);
	}
}
