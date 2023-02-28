#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of a array integer,
 * 
 * @a:pointer to array
 * @n:number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	
	for (i = 0; i < n; i++)
	{
		
		 printf("%d", a[i]);

	
		if (i != n - 1)
			printf(", ");
	}

	printf("\n");
}
