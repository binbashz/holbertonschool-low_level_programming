#include "hash_tables.h"
/**
 * hash_table_set - Add a new node to a hash table.
 *
 * @key: Key
 * @value: Value
 * @ht: Node of a hash table
 *
 * Return: 1 on success, 0 if fails.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new, *end;

	if (!ht || !key) /* Check if hash table and key are provided */
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	end = ht->array[index]; /* Get the existing node at the index in the hash table */

	if (end && strcmp(end->key, key) == 0) /* If a node with the same key already exists */
		end->value = strdup(value); /* Update the value of the existing node with the new value */

	else
	{
		new = malloc(sizeof(hash_node_t)); /* Create a new node */
		if (!new)
			return (0);

		new->key = strdup(key); /* Assign the key to the new node */
		new->value = strdup(value); /* Assign the value to the new node */
		new->next = NULL;

		if (!ht->array[index]) /* If the hash table index is empty */
		{
			ht->array[index] = new; /* Assign the new node as the first node at the index */
			new->next = NULL;

			return (1);
		}

		new->next = end; /* Assign the existing node as the next of the new node */
		ht->array[index] = new; /* Update the hash table index with the new node as the first node */
	}

	return (1);
}
