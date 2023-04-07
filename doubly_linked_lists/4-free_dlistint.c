#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;

/* Traverse through the list and free each node */
	while (head != NULL)
	{
	current = head;
	head = head->next;
	free(current);
	}
}
