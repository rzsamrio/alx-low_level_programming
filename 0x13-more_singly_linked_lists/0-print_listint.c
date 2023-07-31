#include "lists.h"

/**
 * print_listint - prints the integers of a list
 * @h: head of list
 * Return: number of nodes in list
 */

size_t print_listint(const listint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
