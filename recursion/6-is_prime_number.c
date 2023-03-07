
/**
 * is_prime_number - check if an integer is a prime number
 *
 * @n: The integer to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */

#include "main.h"
#include <stdio.h>
#include <math.h>  /*header that provides mathematical functions & constants */

	int is_prime_number(int n)
{
	if (n <= 1)
{
	return (0);
}

	/*  Check if n is divisible by any number up to its square root */
	int sqrt_n = sqrt(n);

	for (int i = 2; i <= sqrt_n; i++)
{
	if (n % i == 0)
{
	return (0);
	}
}

	return (1);
}
