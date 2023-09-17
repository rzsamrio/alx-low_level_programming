#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at an index in a D linked list
 * @h: head of the linked list
 * @idx: the index of the list to insert
 * @n: the integer value to append into the list at index
 * Return: the address of the list or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *curr, *node;

	curr = *h;
	i = 0;
	for (; i <= idx && curr != NULL; i++)
	{
		if (i == idx)
		{
			node = malloc(sizeof(dlistint_t));
			if (node == NULL)
				return (NULL);
			node->n = n;
			node->prev = curr->prev;
			if (curr->next == NULL)
				node->next = NULL;
			else
				node->next = curr;
			(curr->prev)->next = node;
		}
		curr = curr->next;
	}
	if (i < idx)
		return (NULL);
	return (node);
}

