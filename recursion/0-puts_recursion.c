#include <stdio.h>
#include "main.h"

void _puts_recursion(char *s)
{
	if (*s == '\0') /* Base case: if we reach the end of the string */
{
	putchar('\n'); /* print a new line character */
	return;
}
	putchar(*s); /* print the current character */
	_puts_recursion(s + 1);
}
