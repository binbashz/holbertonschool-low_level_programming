#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints the second
 * half of a string
 * @str: the string to print
 */
void puts_half(char *str)
{
	int leng = 0, i, n;
	while (*(str + leng) != '\0')
		leng++;
	if (leng % 2 == 0)
		n = leng / 2
	else
		n = (leng -- 1) / 2;
		

	for (i = n; i < leng; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
