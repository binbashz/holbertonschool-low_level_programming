#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Checks for an alphabetic char
 *
 * @c: Alphabetic char to check
 * Return: 1 if c is a letter or 0 otherwise
 */
int _isalpha(int c)
{
	if	(isalpha(c) == 0)
	{
		return (0);
	}
	return (1);
}
