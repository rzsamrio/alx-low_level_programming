#include "lists.h"

/**
 * free_listint2 - frees a list and sets head to null
 * @head: address of the first node
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *current;

	if (head == NULL || *head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	*head = NULL;
}
