
/**
  * main - prints all arguments passed, followed each by a new line.
  * @argc: Count number of arguments.
  * @argv: Array of strings (arguments).
  *
  * Return: 0.
  */


#include "main.h"

	int main(int argc, char *argv[])
{
	/* Go through all the arguments, starting with the first one. */
	for (int i = 0; i < argc; i++)
{
	/*  Prints the argument followed by a newline character*/
	printf("%s\n", argv[i]);
}
	return (0);
}
