#include "lists.h"

/**
 * list_len - gets the number of element in a list
 * @h: head of list
 * Return: number of elements
*/

size_t list_len(const list_t *h)
{
	int n;

	n = 0;
	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
