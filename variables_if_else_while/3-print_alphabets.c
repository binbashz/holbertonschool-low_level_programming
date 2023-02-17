/*
 * main - print the ahphabet use putchar
 * print in lowercase and in uppercase
 * followed by a new line */

#include <stdio.h>

	int main(void)
{
	char ABC;

	for (ABC = 'a'; ABC <= 'z'; ABC++)
		putchar(ABC);

	for (ABC = 'A'; ABC <= 'Z'; ABC++)
	       putchar(ABC);		
		putchar('\n');

	return (0);
}	
