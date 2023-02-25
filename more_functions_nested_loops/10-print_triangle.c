
/**
 * print_triangle - Prints a triangle
 * followed by a new line
 * @size: Size of the triangle
*/


#include "main.h"


void print_triangle(int size)
{
	int m, c;

	if (size > 0)
{
	for (c = 1 ; c <= size ; c++)
	{
	for (m = 1 ; m <= (size - c) ; m++)
{
	_putchar(' ');
}

	for (m = 0 ; m < c ; m++)
{
	_putchar('#');
}
	_putchar('\n');
	}
	}

	else
	_putchar('\n');
}
