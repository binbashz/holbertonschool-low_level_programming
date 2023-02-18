#include "main.h"

void printnumber(int);

/**
 * print_to_98 - Prints all natural numbers from n to 98
 *
 * @n: int
 */
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

/**
 * printnumber - prints a number
 * @n: number to print
 */
void printnumber(int n)
{

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n / 10)
		printnumber(n / 10);

	_putchar(n % 10 + '0');
}
