#include "main.h"

void printnumber(int);

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int rows;
	int lines;
	int prevNum = 0;

	for (rows = 0; rows <= 9; rows++)
	{
		for (lines = 0; lines < 10; lines++)
		{
			if (lines == 0)
			{
				_putchar('0');
				continue;
			}
			prevNum = prevNum + rows;

			_putchar(',');

			if (prevNum < 10)
			{
				_putchar(' ');
			}

			_putchar(' ');
			printnumber(prevNum);
		}
		prevNum = 0;
		_putchar('\n');

	}
}

/**
 * printnumber - prints a number
 * @n: number to print
 */
void printnumber(int n)
{

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n / 10)
		printnumber(n / 10);

	_putchar(n % 10 + '0');
}
