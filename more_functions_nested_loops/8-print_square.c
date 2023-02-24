#include "main.h"

/**
 * print_square - Prints a square followed
 * by a new line
 * @size: Size of square to be printed
*/

void print_square(int size)
{
	int s, j;

	if (size > 0)
	{
		for (j  = 0 ; ver < size ; j++)
		{
			for (s = 0 ; s < size ; s++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

	else
		_putchar('\n');
}
