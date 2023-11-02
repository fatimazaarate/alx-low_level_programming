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
    unsigned long int i;

    new_table = (hash_table_t*) malloc(sizeof(hash_table_t));
    if (!new_table)
        return NULL;

    new_table->size = size;
    new_table->array = (hash_node_t**) calloc(new_table->size, sizeof(hash_node_t));

    return new_table;
}
