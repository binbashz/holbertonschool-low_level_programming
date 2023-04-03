#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	/* Se verifica si el valor del campo str del nodo actual es NULL o no */
	if (h->str != NULL)
/* Si no es NULL, se imprime la longitud y el contenido del campo str */

	printf("[%d] %s\n", h->len, h->str);

	else /* Si es NULL, se imprime el mensaje "(nil)" */
	printf("[0] (nil)\n");

	/* Se actualiza el puntero h para apuntar al siguiente nodo en la lista */
	h = h->next;

	/* Se incrementa la variable count para contar la cantidad de nodos */
	count++;
}

	/* Se devuelve el valor de count como resultado de la función */
	return (count);
}
