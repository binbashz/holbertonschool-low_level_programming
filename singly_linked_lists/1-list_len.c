#include "lists.h"


/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: A pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0; /* Initialize a counter to 0 */

	while (h != NULL) /* Loop through the list until the end is reached*/
	{
	count++; /* Increment the counter for each node*/
	h = h->next; /* Move to the next node*/
	}

	return (count); /* Return the total number of nodes */
}
