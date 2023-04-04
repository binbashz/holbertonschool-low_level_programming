#include "main.h"

/**
 * print_binary - Imprime la representación binaria de un número.
 * @n: número binario
 */
void print_binary(unsigned long int n)
{
	/* Verifica si el número es mayor que 1 */
	if (n > 1)
	/* Llama a la función de nuevo con n desplazado a la derecha por 1 bit */
	print_binary(n >> 1);
	/* Imprime el bit menos significativo */
	_putchar((n & 1) + '0');
}
