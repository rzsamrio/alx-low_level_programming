#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at an index
 * @head: address of the head node
 * @index: index of the list to delete
 * Return: 1 on successful deletion and -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *curr;

	if (*head == NULL)
		return (-1);
	curr = *head;
	for (i = 0; i < index; i++)
		curr = curr->next;
	if (i == index)
	{
		if (curr->prev != NULL)
		{
			(curr->prev)->next = curr->next;
			(curr->next)->prev = curr->prev;
		}
		else
		{
			*head = (*head)->next;
			if (*head != NULL)
				(*head)->prev = NULL;
		}
	}
	else
		return (-1);
	free(curr);
	return (1);
}
