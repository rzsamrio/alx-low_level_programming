#include "lists.h"
/**
 * print_list - prints the lists in a single L list
 * @h: list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int n;

	n = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
