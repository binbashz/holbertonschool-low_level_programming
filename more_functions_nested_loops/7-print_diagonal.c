#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal
 * @n: Lenght of line
 *
*/

void print_diagonal(int n)
{
	int m, blink;

	if (n > 0)
	{
		for (m = 0 ; m < n ; m++)
		{
			for (blink = 0 ; blink < m ; blink++)
				_putchar(' ');

			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
