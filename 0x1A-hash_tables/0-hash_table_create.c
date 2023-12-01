#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 *
 * @size: The size of the array
 *
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	if (!size)
		return (NULL);

	table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);


	table->size = size;
	table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * table->size);

	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}

	return (table);
}
