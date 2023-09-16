#include "lists.h"

/**
 * get_dnodeint_at_index - finds the node at an index
 * @head: head of the list
 * @index: index to search
 * Return: address of the node if it exists, and null if not
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int i;

	curr = head;
	for (i = 0; i < index && curr != NULL; i++)
		curr = curr->next;
	if (i < index)
		return (NULL);
	return (curr);
}
