#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, otherwise 98, 99 or 100 on failure
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*f)(int, int);

	if (argc != 4)
	{
	printf("Error\n");
	return (98);
}
