#include "main.h"

/**
 * print_triangle  Prints a triangle
 * followed by a new line
 * @size: Size of the triangle
*/

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

