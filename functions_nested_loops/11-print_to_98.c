
/**
 * print_to_98 
 * Prints all natural numbers from n to 98
 *
 * @n: int
 */

#include "main.h"

void printnumber(int);


void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printnumber(n);
			_putchar(',');
			_putchar(' ');
		}
		printnumber(98);
		_putchar('\n');
		return;
	}

	for (; n < 98 ; n++)
	{
		printnumber(n);
		_putchar(',');
		_putchar(' ');
	}
	printnumber(98);
	_putchar('\n');
}

