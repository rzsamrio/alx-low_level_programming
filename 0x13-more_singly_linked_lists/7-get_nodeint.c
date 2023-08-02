#include "lists.h"

/**
 * get_nodeint_at_index - gets the indexed node
 * @head: first node
 * @index: node to get
 * Return: the address of the indexed node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	tmp = head;
	for (i = 0; i < index; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	return (tmp);
}
