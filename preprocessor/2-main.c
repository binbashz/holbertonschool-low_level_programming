#include <stdio.h>

/**
  * main - prints the name of the file it was compiled from.
  * The __FILE__ macro expands to a string literal containing
  * the name of the current source file
  * Return: 0.
  */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
