#include "main.h"
#include <unistd.h>

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the base value
 * @y: the exponent
 *
 * Return: x to the power of y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
    /* base case: x^0 = 1 */
	if (y == 0)
	return (1);

    /* base case: x^1 = x */
	if (y == 1)
	return (x);

    /* recursive case: x^y = x * x^(y-1) */
	if (y > 1)
	return (x * _pow_recursion(x, y - 1));

    /* if y is negative, return -1 */
	return (-1);
}
