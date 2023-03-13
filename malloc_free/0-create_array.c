#include "main.h"
#include <stdio.h>
#include <stdlib.h> /* header for malloc and free functions*/

/**
 * create_array - Crea un array de caracteres y lo inicializa con un carácter
 * dado.
 * @size: Tamaño del array a crear.
 * @c: Carácter con el que inicializar el array.
 *
 * Return: Puntero al array creado, o NULL si falla.
 */
char *create_array(unsigned int size, char c)
{
	char *array = NULL;  /* Inicializamos el puntero a NULL*/
	unsigned int i;     /* Declaramos la variable 'i' de tipo unsigned int*/

	if (size == 0)
	return (NULL);   /* Si el tamaño es 0, devolvemos NULL*/

	array = malloc(size * sizeof(char)); /*Asignamos memoria para el array */

	if (array != NULL)  /* Si la asignación de memoria es exitosa:*/
	{
	for (i = 0; i < size; i++) /* Iteramos sobre cada elemento del array*/
	array[i] = c; /* Inicializamos el elemento con el carácter dado*/
}

	return (array); /*  Devolvemos el puntero al array.*/
}
