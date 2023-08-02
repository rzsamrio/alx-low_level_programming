#include "lists.h"

/**
 * sum_listint - calculates the sum of ints in a list
 * @head: address of the first element in the list
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *tmp;

	if (head == NULL)
		return (0);
	tmp = head;
	sum = 0;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
