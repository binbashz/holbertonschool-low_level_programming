#include "hash_tables.h"

/**
 * key_index - returns the index of a key
 * @key: the key for the index
 * @size: the size of the array
 * Return: returns the index of the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2((unsigned char *)key) % size);
}
