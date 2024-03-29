#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: pointer to the head of the list
 * @index: index of the node to retrieve, starting from 0
 * Return: pointer to the nth node, or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *actual_node = head;

	/* Traverse the list to the nth node */
	while (actual_node != NULL && i < index)
	{
	actual_node = actual_node->next;
	i++;
	}

	/* Return the nth node, or NULL if node does not exist */
	if (actual_node != NULL)
	return (actual_node);
	else
	return (NULL);
}
