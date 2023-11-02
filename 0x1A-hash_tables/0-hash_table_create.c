#include "hash_tables.h"

/**
* hash_table_create - Creates a new hash table.
* @size: The size of the array in the hash table.
*
* Return: A pointer to the newly created hash table, or NULL on failure.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;

	new_table = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);

	new_table->size = size;
	new_table->array = calloc(size, sizeof(hash_node_t));

	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}

	return (new_table);
}
