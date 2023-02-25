#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100, followed by a new line,
 * but for multiples of three print Fizz instead of the number &
 * for the multiples of five print Buzz. For numbers which are
 * multiples of both three and five print FizzBuzz
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");

		

		if (num == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
