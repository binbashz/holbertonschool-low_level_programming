#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_strings - prints strings, followed by a new line..
  * @separator: String between each string.
  * @n: Number of strings passed to the function.
  *
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list count;
	unsigned int i;
	char *s;

	if (n > 0)
	{
		va_start(count, n);

		for (i = 0; i < n - 1; i++)
		{
			s = va_arg(count, char *);
			printf("%s%s", s == NULL ? "(nil)" : s, separator == NULL ? "" : separator);
		}
		s = va_arg(count, char *);
		printf("%s", s == NULL ? "(nil)" : s);
		va_end(count);
	}
	printf("\n");
}
