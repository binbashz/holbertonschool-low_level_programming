
/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize
 *
 * Return: pointer to capitalized string
 */

#include "main.h"
#include <stdio.h>

char *cap_string(char *s)
{
	int capitalize;

	capitalize = 0;
	while (s[capitalize])
	{
		if (s[capitalize] >= 'a' && s[capitalize] <= 'z')
			s[capitalize] -= 'a' - 'A';

		switch (s[capitalize])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '\"':
			case '(':
			case ')':
			case '{':
			case '}':
				if (s[capitalize + 1] >= 'a' && s[capitalize + 1] <= 'z')
					s[capitalize + 1] -= 'a' - 'A';
		}
		capitalize++;
	}
	return (s);
}
