#include "hash_tables.h"

/**
  * hash_table_create - creates a hash table
  * @size: size of the array
  * Return: pointer to created hash table, Null otherwise
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tables;
	unsigned long int i;

	tables = malloc(sizeof(hash_table_t));
	if (tables == NULL)
	{
		return (NULL);
	}
	tables->size = size;
	tables->array = malloc(size * sizeof(hash_node_t *));
	if (tables->array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < tables->size; i++)
	{
		tables->array[i] = NULL;
	}
	return (tables);
}
