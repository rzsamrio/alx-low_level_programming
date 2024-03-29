#include "lists.h"

/**
 * add_node - creates a new node at the beginning of the list
 * @head: pointer to the address of the head of the list
 * @str: string to include in the list
 * Return: the address of the list
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	if (head == NULL || str == NULL)
		return (NULL);
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->len = strlen(node->str);
	node->next = *head;
	*head = node;
	return (node);
}
