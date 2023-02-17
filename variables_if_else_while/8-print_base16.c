/**
 * main - print base 16
 * print the numbers
 * in base 16
 * use putchar
 *
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
	int num;
	char l;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (l = 'a'; l <= 'f'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}
