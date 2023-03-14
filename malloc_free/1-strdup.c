#include "main.h"
#include <stdlib.h>

/**
 * _strdup - gives a pointer to a new string, duplicate of the string str
 * @str: the string to duplicate
 * Return: pointer to the string or NULL
 */
char *_strdup(char *str)
{
	char *p; /* puntero para la nuev cadena */
	int i, j; /* variable para la iteracion y longitud de la cadena*/

	if (str == NULL) /* si el puntero a la cadena original es NULL */
		return (NULL); /* devuelve NULL*/

	j = 0;  /* inicializa la variable de longitud de la cadena*/
	while (str[j] != '\0') /* recorre la cadena original */
		j++; /* incrementa la longitud de la cadena */

	p = malloc(sizeof(char) * (j + 1)); /* asigna memoria para la nueva cadena */
	if (p == NULL) /* si no se pudde asignar memoria, devuelve NULL */
		return (NULL);

	for (i = 0; i <= j; i++) /* copia la cadena original a la nueva cadena */
		p[i] = str[i];

	return (p); /* devuelve un puntero a la nueva cadena*/
}


