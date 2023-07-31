#include "lists.h"

/**
 * print_listint - prints the integers of a list
 * @h: head of list
 * Return: number of nodes in list
 */

size_t print_listint(const listint_t *h)
{
	int i;
	const listint_t *iterator;

	iterator = h;
	i = 0;
	while (iterator != NULL)
	{
		printf("%d\n", iterator->n);
		i++;
		iterator = iterator->next;
	}
	return (i);
}
