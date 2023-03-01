 
/**
 * _strncat - concatenates two strings
 * @dest: pointer for the destination string
 * @src: pointer to the source string
 * @n: maximum number of bytes to use from src
 *
 * Return: pointer to the resulting string dest_star
 */


#include "main.h"
#include <stdio.h>


	char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;

    /* Find the end of the destination string */

	while (*dest != '\0')
{
	dest++;
}

	/* Concatenates te origin string */

	int i = 0;
	while (i < n && *src != '\0')
{
	*dest = *src;
 	dest++;
	src++;
	i++;
 }

	/* add null terminator */

	*dest = '\0';

	return (dest_start);
}
