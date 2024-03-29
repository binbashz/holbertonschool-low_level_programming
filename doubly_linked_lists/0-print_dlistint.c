#include "lists.h"

/**
 * print_dlistint - Prints all elements of a doubly linked list
 * @h: Pointer to the head of the doubly linked list
 *
 * Return: Number of nodes in the doubly linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	node_count++;
	}

	return (node_count);
}
