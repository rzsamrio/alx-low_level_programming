#include "lists.h"

/**
 * add_node_end - adds a node at the end of list
 * @head: pointer to the address of the first node in list
 * @str: string to include in node
 * Return: address of node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *iterator;

	if (head == NULL || str == NULL)
		return (NULL);
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = strlen(node->str);
	if (*head == NULL)
		*head = node;
	else
	{
		iterator = *head;
		while (iterator->next != NULL)
			iterator = iterator->next;
		iterator->next = node;
	}
	node->next = NULL;
	return (node);
}
