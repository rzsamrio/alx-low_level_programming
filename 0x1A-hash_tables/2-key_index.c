#include "hash_tables.h"

/**
 * key_index - gets the index of the key
 * @key: Key of element
 * @size: size of array
 * Return: index
 * We obtain the index by using the djb2 algorithm
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
