
#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: what we want allocate
 * Return: pointer to the allocated memory
 **/

void *malloc_checked(unsigned int b)
{
	int *ptr_to_int;

	ptr_to_int = malloc(b);  /*Asignac memo dinámica a través de func malloc */

	/* Verificar si se asignó la memoria correctamente*/
	if (ptr_to_int == NULL)
	{

	free(ptr_to_int);  /* Liberar el bloque de memoria previamente asignado*/
	exit(98);     /*Terminar la ejecución del programa y devolver el valor 98 */
	}

	return (ptr_to_int); /*devolver el puntero asignado si todo está bien */
}
