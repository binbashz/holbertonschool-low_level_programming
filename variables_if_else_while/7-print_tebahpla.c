/**
 * main - prints the lowercase alphabet
 * in reverse,
 * only use putchar
 * followed by a new line
 * Return: 0
 */

#include <stdio.h>

	int main(void)
{
	char alpRev;

	for (alpRev = 'z'; alpRev >= 'a'; alpRev--)
	{
	putchar(alpRev);
	}
		putchar('\n');

	return (0);
}
