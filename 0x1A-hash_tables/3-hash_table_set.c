#include "hash_tables.h"

/**
 * hash_table_set - adds elements to a hash table
 * @ht: table to store data
 * @key: Unique identifier
 * @value: String to store
 * Return: 1 on SUCCESS, 0 on FAILURE
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *curr;

	if (ht == NULL)
		return (0);
	if (key == NULL || strcmp(key, "") == 0)
		return (0);
	if (value == NULL || strcmp(value, "") == 0)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	if (node->key == NULL || node->value == NULL)
		return (0);

	curr = ht->array[index];
	if (curr == NULL)
		ht->array[index] = node;
	else
	{
		while (curr->next != NULL)
			curr = curr->next;
		curr = node;
	}
	return (1);
}
