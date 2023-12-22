#include "hash_tables.h"

/**
 * key_index - Get the index at which a key/value pair should
 *             be stored in the array of a hash table.
 * @key: The key to get the index of.
 * @size: The size of the array of the hash table.
 *
 * Return: The index of the key.
 *
 * Description: This function uses the djb2 algorithm to calculate
 *              the hash value of the key and then takes the modulo
 *              with the size of the array to determine the index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
