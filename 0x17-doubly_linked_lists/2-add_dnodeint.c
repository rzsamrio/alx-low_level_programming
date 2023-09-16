#include "lists.h"

/**
 * add_dnodeint - adds a node at the start of a linked list
 * @head: address of the head node
 * @n: int value to add to node
 * Return: address of the newly created node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	node->prev = NULL;
	*head = node;
	return (node);
}
