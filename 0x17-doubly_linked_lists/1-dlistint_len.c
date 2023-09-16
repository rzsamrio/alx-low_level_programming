#include "lists.h"

/**
 * dlistint_len - returns the number of nodes in a doubly linked list
 * @h: the head node of doubly linked list
 * Return: the no of nodes in a doubly linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int num;
	const dlistint_t *curr;

	curr = h;
	num = 0;
	while (curr != NULL)
	{
		curr = curr->next;
		num++;
	}
	return (num);
}
