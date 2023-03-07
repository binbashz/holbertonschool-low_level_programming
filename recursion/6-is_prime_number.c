
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
	if (n <= 1) /* checks if n is less than or equal to 1 */
{
	return (0);    /* returns 0 (not prime) if it is */
}

	int sqrt_n = sqrt(n);
	/* calculates the square root of n and assigns it to sqrt_n */

	for (int i = 2; i <= sqrt_n; i++)
		/* loops through all integers from 2 to sqrt_n */
{
	if (n % i == 0)  /*  checks if n is divisible by i */
{
	return (0);    /* returns 0 (not prime) if it is */
	}
}

	return (1);    /* returns 1 (prime) if no divisors are found*/

}

/**
 * main - Entry point fot the program
 *
 * Return: Always 0
 */
	int main(void)
{
	int n = 7;    /* test case*/

	if (is_prime_number(n))
{
	printf("%d is prime.\n", n);    /* prints message if n is prime */
	}
	else
	{
	printf("%d is not prime.\n", n);
	}

	return (0);
}
