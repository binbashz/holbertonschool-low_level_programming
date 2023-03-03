
/**
 * string_toupper - changes lowercase to uppercase
 * @str: the string to change
 *
 * Return: the string that change for uppercase
 */


#include "main.h"


#include <stdio.h>
#include <ctype.h>

	char *string_toupper(char *str) /* function prototype */
{
	char *p = str; /* creamos un puntero char que apunte al incio de la cadena */

	while (*p != '\0') /* mientras no llegemos al final de la cadena */
{

	if (islower(*p)) /* si el caracter actual es una letra minuscula */
{
	*p = toupper(*p); /* lo convertimos en mayuscula */

}
	p++; /* pasamos al siguiente caracter de la cadena */ 
}
	return (str); /* devolvemos un puntero al inicio de la cadena */ 
}
