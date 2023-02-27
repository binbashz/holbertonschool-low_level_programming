#include "main.h"
#include <string.h>

/**
 * _strlen - function with 1 argument
 * @s: char type pointer
 *
 * Description: strlen : function to return Length of string
 * Return: String
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
