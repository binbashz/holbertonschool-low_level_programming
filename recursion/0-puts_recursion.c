
#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: the pointer input
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /*  base case: if we reach the end of the string */
	{
		_putchar('\n'); /* print a new line character */
		return;
	}
	putchar(*s); /* print the current character */
	_puts_recursion(++s);
}
