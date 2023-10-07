#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: Table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	int set;
	unsigned long int i;
	hash_node_t *ptr;

	if (ht == NULL)
		return;

	set = 0;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			if (strcmp(ptr->key, "") == 0 || strcmp(ptr->value, "") == 0)
				continue;
			if (set != 0)
				printf(", ");
			printf("'%s': '%s'", ptr->key, ptr->value);
			set = 1;
			ptr = ptr->next;
		}
	}
	printf("}\n");
}
