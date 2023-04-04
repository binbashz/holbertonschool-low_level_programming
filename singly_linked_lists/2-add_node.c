

/**
 * add_node - adds a new node
 * @head: pointer to the first node
 * @str: pointer to the name string
 *
 * Return: the address of the new element, or NULL if it failed
 */

#include "lists.h"

	list_t *add_node(list_t **head, const char *str)
{
	/* Crear un nuevo nodo y verificar si se asignó correctamente la memoria */
	list_t *node = NULL;

	node = malloc(sizeof(list_t));

	if (!node) /* Si malloc falló */
	{
		free(node); /* Liberar cualquier memoria asignada */
		return (node); /* Devolver NULL */
	}

	/* Duplicar la cadena y verificar si se asignó correctamente la memoria */
	node->str = malloc(sizeof(char) * strlen(str) + 1);
	if (!node->str) /* Si malloc falló */
	{
		free(node->str); /* Liberar cualquier memoria asignada */
		free(node); /* Liberar cualquier memoria asignada */
		return (node); /* Devolver NULL */
	}

	/* Copiar la cadena y actualizar los campos del nodo */
	strcpy(node->str, str); /* Copiar la cadena */
	node->len = strlen(str); /* Guardar la longitud de la cadena */
	node->next = *head; /* Establecer el siguiente nodo*/
				/*como el que antes era el primero */

	/* Establecer el nuevo nodo como el primero en la lista*/
								/* y devolver su dirección */
	*head = node;
	return (node);
}
