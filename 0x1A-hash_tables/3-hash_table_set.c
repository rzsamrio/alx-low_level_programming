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
	char *old_val;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);
	if (value == NULL)
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
		if (strcmp(node->key, curr->key) == 0)
		{
			old_val = curr->value;
			curr->value = node->value;
			free(old_val);
			free(node->key);
			free(node);
		}
		else
		{
			node->next = curr;
			ht->array[index] = node;
		}
	}
	return (1);
}
