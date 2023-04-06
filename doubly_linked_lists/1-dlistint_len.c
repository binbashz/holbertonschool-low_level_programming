#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list
 * @h: Pointer to the head of the doubly linked list
 *
 * Return: Number of elements in the doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t element_count = 0; /* Variable para contar el número de elementos*/

	while (h != NULL) /* Mientras el puntero no sea nulo (no haya más nodos)*/
	{
	element_count++; /* Incrementa el contador de elementos*/
	h = h->next; /*Actualiza el puntero a la siguiente posición de la lista */
	}

	return (element_count); /* Devuelve número total de elementos en la lista*/
}
