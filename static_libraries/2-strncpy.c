#include "main.h"

/**
*   _strncpy - appends the string in src to the one in dest
*    @dest: destination
*     @src: source
*      @n: n characters to print
*       Return: dest
**/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

		if (n == 0)
			;
	else if (src[0] != '\0')
{
	for (i = 0; i < n && src[i]; i++)
	dest[i] = src[i];
	if (i < n)
	for (; i < n; i++)
	dest[i] = '\0';
}
	else if (src[0] == '\0')
	for (i = 0; i < n; i++)
	dest[i] = '\0';
	return (dest);
}
