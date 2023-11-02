#include "hash_tables.h"

/**
* hash_table_create - Creates a new hash table.
* @size: The size of the array in the hash table.
*
* Return: A pointer to the newly created hash table, or NULL on failure.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	new_table = malloc(sizeof(hash_table_t));
	if (my_new_table == NULL)
		return (NULL);


	my_new_table->size = size;
	my_new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	return (new_table);
}
