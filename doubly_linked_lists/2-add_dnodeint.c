#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: double pointer to the head of the list
 * @n: value of the new node
 *
 * Return: pointer to the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);

	/* Initialize the new node */
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	/* If the list is not empty, update the previous pointer of the next node */
	if (*head != NULL)
	(*head)->prev = new_node;

	/* Set the new node as the head of the list */
	*head = new_node;

	return (new_node);
}
