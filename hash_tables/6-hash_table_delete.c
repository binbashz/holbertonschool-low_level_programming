

/*
 * hash_table_delete - deletes a hash table
 * @ht: pointer to the hash table
 *
 * Return: void
 */

#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *hash = NULL, *temp = NULL;  /* Declare pointers to hash nodes */
	unsigned long int i = 0;  /* Declare an unsigned long int variable for loop iteration */

	if (!ht)  /* Check if the hash table is NULL */
	return;  /* If so, return immediately */
	for (; i < ht->size; i++)  /* Loop through each bucket in the hash table */
	{
	hash = ht->array[i];  /* Get the head of the linked list in the current bucket */
	while (hash)  /* Loop through each node in the linked list */
	{
	temp = hash;  /* Store the current node in a temporary variable */
	hash = hash->next;  /* Move to the next node in the linked list */
	free(temp->key);  /* Free the memory for the key of the current node */
	free(temp->value);  /* Free the memory for the value of the current node */
	free(temp);  /* Free the memory for the current node */
	}
	}
	ree(ht->array);  /* Free the memory for the array of buckets in the hash table */
