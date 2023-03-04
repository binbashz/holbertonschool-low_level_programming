#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a  substring
 * @haystack: string to  search in
 * @needle: substring to  search for
 *
 * Return: pointer to  beginning of substring or NULL if not found
 */


char *_strstr(char *haystack, char *needle)
{
	int st, stk;

	for (st = 0; haystack[st]; st++)
	{

	for (stk = 0; needle[stk]; stk++)
{
	if (needle[stk] != haystack[st + stk])
		}
		if (!needle[stk])
			return (haystack + st);
	}

	return (NULL);
}
