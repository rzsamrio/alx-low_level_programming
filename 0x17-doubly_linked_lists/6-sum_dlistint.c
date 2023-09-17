#include "lists.h"

/**
 * sum_dlistint - calculates the sum of ints in a doubly linked list
 * @head: the head of the list
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr;
	int sum;

	curr = head;
	sum = 0;
	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
