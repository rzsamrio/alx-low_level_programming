#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash tabe
 * @size: size of the table
 * Return: Adress of the table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));

	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	return (table);
}
