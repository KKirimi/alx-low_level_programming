#include "hash_tables.h"
/**
  * hash_table_delete - Deletes a hash table
  * @ht: the hash table
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int k;
	hash_node_t *current = NULL;
	hash_node_t *temp = NULL;

	if (ht == NULL)
		return;
	for (k = 0; k < ht->size; k++)
	{
		current = ht->array[k];
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
