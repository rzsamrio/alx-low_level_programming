#include "lists.h"

/**
 * free_listint - frees a list
 * @head: head node
 */

void free_listint(listint_t *head)
{
	listint_t *tmp, *current;

	if (head == NULL)
		return;
	current = head;
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
}
