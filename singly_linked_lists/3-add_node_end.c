#include "lists.h"

/**
 * add_node_end - Create new node at the end.
 *
 * @head: pointer.
 * @str: string.
 *
 * Return: The addres of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	list_t *actual_node = *head;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (actual_node->next != NULL)
		actual_node = actual_node->next;

	actual_node->next = new_node;

	return (actual_node->next);
}
