#include "lists.h"

/**
 * print_dlistint - prints the content of a doubly linked list
 * @h: pointer to head node
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int num;
	const dlistint_t *curr;

	/*
	 * if (h == NULL)
	 * return (0);
	 * NUll head already accounted for
	*/
	curr = h;
	num = 0;
	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		num++;
	}
	return (num);
}
