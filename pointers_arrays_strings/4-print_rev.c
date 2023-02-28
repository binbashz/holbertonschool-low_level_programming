#include "main.h"
#include <string.h> /*  - string.h - header file for operations with strings */



	void print_rev(char *s) 
{
	int lengthwise = strlen(s);

	for (int i = lengthwise -1; i>= 0; i--)
	{
	putchar(s[i});
}

	

