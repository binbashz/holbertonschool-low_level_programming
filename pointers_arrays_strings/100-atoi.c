#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _atoi - Converts a string to an integer
 * @s: The pointer to convert
 * Return: converted int
**/


	int _atoi(char *s)
{
	int re = 0;
	int sign = 1;
	int number;

	while (*s != '\0')
	{
		if (*s == '-')
		{
		sign *= -1;
		}
		else if (*s == '+')
		{
		}
		else if (*s >= '0' && *s <= '9')
		{
			number = *s - '0';

		if (re > (INT_MAX - number) / 10)
		{
			return (sign > 0 ? INT_MAX : INT_MIN);
		}
			re = re * 10 + number;
		}
			else if (re > 0)
		{

			break;
		}
		s++;
	}
	return (sign * re);
}
