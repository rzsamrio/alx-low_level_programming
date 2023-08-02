#include "lists.h"

/**
 * pop_listint - deletes the head of a list
 * @head: address of head;
 * Return: the data of the old head
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int x;

	if (head == NULL || *head == NULL)
		return (0);
	tmp = (*head);
	x = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (x);
}
