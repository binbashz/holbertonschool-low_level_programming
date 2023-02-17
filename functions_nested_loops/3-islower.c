#include "main.h"
#include <ctype.h>

/**
 * _islower - Checks for a lowercase char
 *
 * @c: Number to check
 * Return: 1 if int is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
	if	(islower(c) == 0)
	{
		return (0);
	}
	return (1);
}
