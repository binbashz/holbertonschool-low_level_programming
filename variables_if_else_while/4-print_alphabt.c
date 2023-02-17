/**
 * main - print the alphabet use putchar
 * dont print "q" and "e" letter
 * followed by a new line
 * Return: 0
 */

#include <stdio.h>

	int main(void)
{
	char ABC;

	for (ABC = 'a'; ABC <= 'z'; ABC++)
	{

	if (ABC != 'q' && ABC != 'e')
	{
		putchar(ABC);
		}
}

		putchar('\n');

	return (0);
}
