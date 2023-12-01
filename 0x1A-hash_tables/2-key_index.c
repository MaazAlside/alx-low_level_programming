#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 *
 * @key: is the key
 * @size: the size of the array of the hash table
 *
 * Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index_value;
	unsigned int index;

	index_value = hash_djb2(key);

	index = index_value % size;

	return (index);
}
