#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: a string
 * @s2: s string
 * @n: the number of bytes of the second string
 * Return: pointer to the array or NULL
 */


/* Esta función concatena dos cadenas de caracteres. */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    /* Declara las variables para las longitudes de s1 y s2 */
    unsigned int s1_len = 0, s2_len = 0;
    /* Declara un puntero para la cadena resultante y establece su valor inicial en NULL */
    char *result = NULL;

    /* Trata NULL como una cadena vacía */
    if (s1 == NULL) { s1 = ""; }
    if (s2 == NULL) { s2 = ""; }

    /* Obtiene la longitud de s1 y s2 utilizando la función strlen */
    s1_len = strlen(s1);
    s2_len = strlen(s2);

    /* Limita n a la longitud de s2 como máximo */
    if (n >= s2_len) { n = s2_len; }

    /* Asigna memoria para la cadena resultante utilizando la función malloc */
    /* El tamaño de la memoria necesaria es la longitud de s1 más los primeros n bytes de s2 más un byte adicional para el terminador nulo */
    result = malloc(sizeof(char) * (s1_len + n + 1));
    if (result == NULL)
	{  /* Si la asignación falla, devuelve NULL */
 	return NULL;
 	}

 	/* Copia el contenido de s1 en la cadena resultante utilizando la función memcpy */
 	/* La posición de inicio es el puntero de resultado, el número de bytes a copiar es la longitud de s1 */
	memcpy(result, s1, s1_len);

    /* Copia los primeros n bytes de s2 en la cadena resultante utilizando la función memcpy */
    /* La posición de inicio es el puntero de resultado, desplazado por la longitud de s1, el número de bytes a copiar es n */
 	memcpy(result + s1_len, s2, n);

    /* Agrega un terminador nulo al final de la cadena resultante */
	result[s1_len + n] = '\0';

    /* Devuelve el puntero de la cadena resultante */
    return (result);
}
