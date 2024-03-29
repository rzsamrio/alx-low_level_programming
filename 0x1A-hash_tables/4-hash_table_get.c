#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value from the hash table
 * @ht: Hash table holding data
 * @key: value identifier
 * Return: Value if found, NULL if not
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ptr;

	if (key == NULL || strcmp(key, "") == 0)
		return (NULL);
	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);
	ptr = ht->array[index];
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);
}
