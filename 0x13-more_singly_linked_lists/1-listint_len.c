#include "lists.h"

/**
 * listint_len - finds the length of a list
 * @h: head of list
 * Return: no. of nodes in list
 */

size_t listint_len(const listint_t *h)
{
	int i;
	const listint_t *iterator;

	iterator = h;
	i = 0;
	while (iterator != NULL)
	{
		i++;
		iterator = iterator->next;
	}
	return (i);
}
