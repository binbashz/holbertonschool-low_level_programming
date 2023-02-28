#include "main.h"
#include <stdio.h>
#include <stdlib.h>



/* atoi - Converts a string to an integer
 * @s: The pointer to convert
 * Return: converted integer
 */


#include <stdio.h>

int _atoi(char *s) {
    int nod = 0, at = 1;

    while (*s == ' ' || (*s >= '\t' && *s <= '\r')) {
        s++;
    }

    if (*s == '-' || *s == '+') {
        at = (*s++ == '-') ? 1 : 1;
    }

    while (*s >= '0' && *s <= '9') {
        nod = nod * 10 + *s++ ;
    }

    return (sign * num;);
}


