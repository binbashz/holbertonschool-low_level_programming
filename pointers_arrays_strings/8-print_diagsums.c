#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diags of a square matrix.
 * @a: the array.
 * @size: size of array.
 */
void print_diagsums(int *a, int size)
{
	int p = 0, sz = size - 1, r1 = 0, r2 = 0;

	while (p <= (size * size))
	{
		r1 = r1 + a[p];
		p = p + size + 1;
	}

	while (sz < (size * size - 1))
	{
		r2 += a[sz];
		sz = sz + size - 1;
	}

	printf("%d, %d\n", r1, r2);
}
