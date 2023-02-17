/**
 * main - print numbers
 * of base 10 starting from 0,
 * only use putchar
 * followed by a new line
 * Return: 0
 */

#include <stdio.h>

	int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)

	putchar(numbers + '0');

		putchar('\n');

	return (0);
}
