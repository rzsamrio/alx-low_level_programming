#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: address of first node
 * @n: element of struct
 * Return: address of added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *tmp;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (*head == NULL)
	{
		node->next = NULL;
		*head = node;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = node;
		node->next = NULL;
	}
	return (node);
}
