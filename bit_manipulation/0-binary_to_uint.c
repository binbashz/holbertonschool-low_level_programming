#include "main.h"


/**
 * binary_to_uint - converts a binary number
 * @b: strign of numbers in binary
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
    /* Declaramos una variable `result` para almacenar el resultado.*/
	unsigned int result = 0;

	/* Si la cadena es NULL, retornamos 0 inmediatamente.*/
	if (b == NULL)
{
	return (0);
	}

	/* Recorremos la cadena caracter por caracter.*/
	for (; *b != '\0'; b++)
{
	/* Verificamos que cada caracter sea '0' o '1'.*/
	if (*b != '0' && *b != '1')
	{
	/* Si encontramos un caracter que no es '0' ni '1', */
	/*retornamos 0 inmediatamente*/
	return (0);
	}
	/* Calculamos el valor decimal del caracter actual*/
	/* y lo agregamos al resultado acumulado. */
	result = result * 2 + (*b - '0');
	}

    /* Retornamos el resultado acumulado.*/
	return (result);
}
