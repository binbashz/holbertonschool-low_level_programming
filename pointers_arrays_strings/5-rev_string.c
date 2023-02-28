#include "main.h"

/**
 * rev_string - reverses a tring.
 * @s: the string to be reversed.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	char rev;


	/* gets the length*/

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len / 2; i++)/* exchange the string*/
	{
		rev = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = rev;
	}
}
