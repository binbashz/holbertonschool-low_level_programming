#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the hash table array
 *
 * Return: A pointer to the newly created hash table, or NULL if something
 *         went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i; 

	if (size == 0)
	return (NULL);

	hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));
 	if (hash_table == NULL)
	return (NULL);

	hash_table->size = size;
	hash_table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
{
	free(hash_table);
	return (NULL);
	}

/* Inicializar todos los elementos del arreglo a NULL */
	for (i = 0; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}

	return (hash_table);
}
