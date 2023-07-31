#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of a list
 * @head: address of first node in list
 * @n: int to add in list
 * Return: address of new node (head) element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
