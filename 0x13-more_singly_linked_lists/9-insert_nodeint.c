#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at an index
 * @head: address of head
 * @n: node value
 * @idx: index to insert
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp, *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = (*head);
		*head = new;
	}
	else if (idx > 0)
	{
		if (*head == NULL)
			return (NULL);
		tmp = *head;
		for (i = 1; i < idx; i++)
		{
			tmp = tmp->next;
			if (tmp == NULL)
				return (NULL);
		}
		new->next = tmp->next;
		tmp->next = new;
	}
	else
		return (NULL);
	return (new);
}
