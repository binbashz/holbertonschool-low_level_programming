#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data (n) in a dlistint_t linked list
 * @head: pointer to the head of the list
 * Return: sum of all the data (n), or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

/* Traverse the list and add the data (n) of each node to the sum */
	while (current != NULL)
	{
	sum += current->n;
	current = current->next;
	}

	return (sum);
}
