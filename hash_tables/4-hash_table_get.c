#include "hash_tables.h"
/**
 *hash_table_get - get a value of a key
 *
 *@ht: hash table
 *@key: key
 * Return: value on success, NULL if fails.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int idx = 0;
	hash_node_t *current_node = NULL;

	if (!ht || !key)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	/* The index of the key is obtained in the hash table */

	current_node = ht->array[idx];
	/* Se obtiene el nodo correspondiente al índice calculado */

	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			return (current_node->value);
			/* Se retorna el valor asociado a la clave si se encuentra */
		}
		current_node = current_node->next;
			/* Se avanza al siguiente nodo en caso de colisión */
	}

	return (NULL); /* Si no se encuentra la clave, se retorna NULL */
}
