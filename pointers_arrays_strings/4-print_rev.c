/**
*  print_rev -  Takes a string as input,
*  prints it in reverse order and appends a new line to the end
*
*  @s: caracter string
*
*/
#include "main.h"
#include <stdio.h>
#include <string.h> /*  - string.h - header file for operations with strings */

void print_rev(char *s)
{
	int star = 0;

	for (; s[star]; star++)

	star -= 1;

	for (; star > -1; star--)
		printf("%c", s[star]);
	putchar('\n');
}
