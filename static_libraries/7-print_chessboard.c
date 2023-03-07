#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: the row of the array
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, arr;

	for (i = 0; i < 8; i++)
	{
		for (arr = 0; arr < 8; arr++)
		{
			if (arr == 7)
			{
				_putchar(a[i][arr]);
				_putchar('\n');
			}
			else
				_putchar(a[i][arr]);
		}
	}
}
