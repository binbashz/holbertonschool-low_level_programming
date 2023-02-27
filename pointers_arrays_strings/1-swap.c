#include "main.h"

/**
 * swap_int - function with two int type pointer argument
 * @a: 1 argument type int
 * @b: 2 argument type int
 *
 * Description: Using pointer to swap a and b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int horses;

	horses = *a;
	*a = *b;
	*b = horses;
}
