
#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse the content of a array of int
 * @a: an array of integers
 * @n: the number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, arr;

	for (i = 0; i < n / 2; i++)
	{
		arr = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = arr;
	}
}
