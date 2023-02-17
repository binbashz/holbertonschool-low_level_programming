/** 
 * print the alphabet
 *
 * Return: void
 */

#include "main.h"

	void print_alphabet(void)
{
	char al;

	for (al = 'a' ; al <= 'z' ; al++)
	{
		putchar(al);
	}
	putchar('\n');
}
