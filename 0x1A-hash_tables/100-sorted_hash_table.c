#include "hash_tables.h"

/**
 * shash_table_create - Creates an ordered hash table
 * @size: size of the ordered hash table
 * Return: Address of the hash table or NULL if failed
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = calloc(table->size, sizeof(shash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	table->shead = NULL;
	table->stail = NULL;
	return (table);
}


/**
 * shash_table_set - initialising table elements
 * @ht: adddress of the hash table to store in
 * @key: key of the value to be stored
 * @value: main object stored
 * Return: Address of the hash_table
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node, *curr;
	char *old_val;
	unsigned long int index;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);
	if (value == NULL)
		return (0);

	index = key_index((const unsigned char *) key, ht->size); /* Update */
	curr = ht->array[index];
	if (curr == NULL)
	{
		node = init_node(key, value);
		if (node == NULL)
			return (0);
		ht->array[index] = node;
	}
	else
	{
		if (strcmp(key, curr->key) == 0)
		{
			old_val = curr->value;
			curr->value = strdup(value);
			free(old_val);
			return (1);
		}
		else
		{
			node = init_node(key, value);
			if (node == NULL)
				return (0);
			node->next = curr;
			ht->array[index] = node;
		}
	}

	update_sort(ht, node);
	return (1);
}

/**
 * init_node - initialises a node for the ordered table
 * @key: unique key
 * @value: stored value
 * Return: Address of node or NULL
 */

shash_node_t *init_node(const char *key, const char *value)
{
	shash_node_t *new_node;

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	new_node->snext = NULL;
	new_node->sprev = NULL;
	return (new_node);
}


/**
 * update_sort - updates the sorted list of the table
 * @ht: address of hash table
 * @node: new node to update
 */

void update_sort(shash_table_t *ht, shash_node_t *node) 
{
	shash_node_t *ptr;

	if (ht->shead != NULL) /* Check if sorted list exists and iterate */
	{
		ptr = ht->shead;
		if (strcmp(node->key, ht->shead->key) < 0)
			ht->shead = node;
		else
		{
			while ((strcmp(node->key, ptr->key) > 0))
			{
				if (ptr->snext == NULL)
				{
					ptr->snext = node;
					node->sprev = ptr;
					node->snext = NULL;
					ht->stail = node;
					return;
				}
				ptr = ptr->snext;
			}
		ptr->sprev->snext = node;
		}
		node->snext = ptr;
		node->sprev = ptr->sprev;
		ptr->sprev = node;
	}
	else
	{
		ht->shead = node;
		ht->stail = node;
		node->sprev = NULL;
	}
}


/**
 * shash_table_get - retrieves a value from the hash table
 * @ht: Hash table holding data
 * @key: value identifier
 * Return: Value if found, NULL if not
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *ptr;

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


/**
 * shash_table_print - Prints hash table in ascending order
 * @ht: Table to print
 */

void shash_table_print(const shash_table_t *ht)
{
	int set;
	shash_node_t *ptr;

	if (ht == NULL)
		return;

	set = 0;
	ptr = ht->shead;
	putchar('{');
	while (ptr != NULL)
	{
		if (set != 0)
			printf(", ");
		printf("'%s': '%s'", ptr->key, ptr->value);
		set = 1;
		ptr = ptr->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print - Prints hash table in descending order
 * @ht: Table to print
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	int set;
	shash_node_t *ptr;

	if (ht == NULL)
		return;

	set = 0;
	ptr = ht->stail;
	putchar('{');
	while (ptr != NULL)
	{
		if (set != 0)
			printf(", ");
		printf("'%s': '%s'", ptr->key, ptr->value);
		set = 1;
		ptr = ptr->sprev;
	}
	printf("}\n");
}


/**
 * shash_table_delete - deletes a hash table
 * @ht: Table to be deleted
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *iter, *prev;

	iter = ht->shead;
	while (iter != NULL)
	{
		prev = iter;
		iter = iter->snext;
		free(prev->key);
		free(prev->value);
		free(prev);
	}
	free(ht->array);
	free(ht);
}
