#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints  every other character of a string,
 * start with the first character
 * @str: input  string
 */


void puts2(char *str)
{
	int p;

	for (p = 0; str[p] != '\0'; p++)
	{
		if (p % 2 == 0)
		{
			_putchar(str[p]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
