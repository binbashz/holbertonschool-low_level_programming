#include "main.h"
/**
** more_numbers - prints 10 times the numbers, from 0 to 14
**/

void more_numbers(void)
{
	int n, j;

	for (n = 0; n < 10; n++)
{
	for (j = 0; j < 15; n++)
{
	if (n > 9)
{
	_putchar(n / 10 + '0');
}
	_putchar(n % 10 + '0');
}
	_putchar('\n');
	}
}

