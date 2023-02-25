#include "main.h"

/**
 * main - Prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three print Fizz instead of the number and
 * for the multiples five print Buzz. For numbers which are
 * multiples of both three and five print FizzBuz
 *
 * Return: Always 0.
 */
int main(void)
{
	int fbz;

	for (fbz = 1; fbz <= 100; fbz++)
	{
		if ((fbz % 3) == 0 && (fbz % 5) == 0)
			printf("FizzBuzz");
