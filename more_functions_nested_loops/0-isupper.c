#include "main.h"
/**
*  _isupper - returns 1 if c is upper case
*    @c: character
*  Return: 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
