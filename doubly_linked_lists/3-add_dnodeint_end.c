#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 * @head: double pointer to the head of the list
 * @n: value of the new node
 *
 * Return: pointer to the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *temp = NULL;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);

	/* Initialize the new node */
	new_node->n = n;
	new_node->next = NULL;

	/* If the list is empty, set the new node as the head */
	if (*head == NULL)
	{
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
	}

	/* Find the last node in the list */
	temp = *head;
	while (temp->next != NULL)
	temp = temp->next;

	/* Set the new node as the next node of the last node */
	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}
