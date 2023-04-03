#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
/**
  * print_numbers - print the n parameters.
  * @separator: separador de numeros.
  * @n:numero de parametros.
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list lista;

va_start(lista, n);
for (i = 0; i < n; i++)
{
	if (separator == NULL)
	{
		printf("%d", va_arg(lista, int));
	}
	else
	{
	printf("%d", va_arg(lista, int));
	if (i != (n - 1))
			{
	printf("%s", separator);
	}

}
}
printf("\n");

	va_end(lista);
}
