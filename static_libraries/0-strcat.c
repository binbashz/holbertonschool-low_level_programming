#include "main.h"

/**
*   _strcat - appends the string in src to the one in dest
*   @dest: destination
*     @src: source
*     Return: dest
**/

char *_strcat(char *dest, char *src)
{
	int string;
	int j;

	for (string = 0; dest[string]; string++)
	{}
	for (j = 0; src[j]; j++, string++)
	dest[string] = src[j];
	src[j] = '\0';
	return (dest);
}
