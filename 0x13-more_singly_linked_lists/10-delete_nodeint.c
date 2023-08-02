#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: address of head
 * @index: index to delete
 * Return: 1 on success, -1 on error
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *prev;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
		*head = (*head)->next;
	else if (index > 0)
	{
		for (i = 0; i < index; i++)
		{
			prev = tmp;
			tmp = tmp->next;
			if (tmp == NULL)
				return (-1);
		}
		prev->next = tmp->next;
	}
	else
		return (-1);
	free(tmp);
	return (1);
}
