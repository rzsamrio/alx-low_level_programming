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
	hash_node_t *idx;

	if (ht == NULL)
		return (0);
	if (key == NULL || strcmp(key, "") == 0)
		return (0);
	if (value == NULL || strcmp(value, "") == 0)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);

	idx = ht->array[index];
	if (idx == NULL)
	{
		idx = malloc(sizeof(hash_node_t));
		idx->key = strdup(key);
		idx->value = strdup(value); /* Write-able */
		idx->next = NULL;
	}
	else
	{
		while (idx->next != NULL)
			idx = idx->next;
		idx->key = strdup(key);
		idx->value = strdup(value);
		idx->next = NULL;
	}
	return (1);
}
