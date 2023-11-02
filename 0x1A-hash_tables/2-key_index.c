#include "hash_tables.h"

/**
 * key_index - function that gives u the index of a key
 * @key: key
 * @size: size of hashtable(num of buckets)
 * Return: index key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
