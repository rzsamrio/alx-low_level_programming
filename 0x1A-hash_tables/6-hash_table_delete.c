#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: Table to be deleted
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr, *prev;

	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr != NULL)
		{
			free(curr->key);
			free(curr->value);
			prev = curr;
			curr = curr->next;
			free(prev);
		}
	}
	free(ht->array);
	free(ht);
}
