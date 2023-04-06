#ifndef __main_h__
#define __main_h__


#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

#endif
