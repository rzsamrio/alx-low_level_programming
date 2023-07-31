#include "lists.h"

/**
 * listint_len - finds the length of a list
 * @h: head of list
 * Return: no. of nodes in list
 */

size_t listint_len(const listint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
