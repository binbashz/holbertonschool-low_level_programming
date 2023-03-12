
/**
  * main - multiplies two numbers and prints the result.
  * @argc: Count number of arguments.
  * @argv: Array of strings (arguments).
  *
  * Return: 1.
  */

#include "main.h"

	int main(int argc, char *argv[])
{
	if (argc != 3)  /* Check that two arguments were passed */
	{
	printf("Error\n");    /* If not, print an error message */
	return (1);   /* And return an error code (1) */
	}
	int num1 = atoi(argv[1]); /* Convert the first argument to an integer */
	int num2 = atoi(argv[2]); /* Convert the second argument to an integer */
	int resultado = num1 * num2; /* Multiply the 2 numbers and store the result */

	printf("%d\n", resultado); /* Print the result followed by a new line */

	return (0); /* Return a success code (0) */
}
