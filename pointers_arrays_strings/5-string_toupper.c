
/**
 * string_toupper - changes lowercase to uppercase
 * @str: the string to change
 *
 * Return: the string that change for uppercase
 */


#include "main.h"


#include <stdio.h>
#include <ctype.h>

	char *string_toupper(char *str)
{
	char *p = str;

	while (*p != '\0')
{

	if (islower(*p))
{
	*p = toupper(*p);

}
	p++;
}
	return (str);
}
