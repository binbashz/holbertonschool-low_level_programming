#include "main.h"
/**
 * aux - auxiliar function
 * @x:  int
 * @y:  int
 * Return: function
 */

int aux(int x, int y)
{
	if (x < 2)
	{
		return (0);
	}
	if (y == 1)
	{
		return (1);
	}
	if (x % y == 0)
	{
		return (0);
	}
	return (aux(x, y - 1));
}

/**
 * is_prime_number - finds prime numbers
 * @n: the number to check
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (aux(n, n - 1));
}
