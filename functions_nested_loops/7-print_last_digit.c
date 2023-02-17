#include "main.h"

int printnumber(int);

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: int
 * Return: The last digit
 */
int print_last_digit(int n)
{
	int num;

	num = printnumber(n % 10);
	return (num);
}

/**
 * printnumber - prints a number
 * @n: number to print
 * Return: int
 */
int printnumber(int n)
{

	if (n < 0)
	{
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	if (n / 10)
		printnumber(n / 10);

	_putchar(n % 10 + '0');
	return (n);
}
