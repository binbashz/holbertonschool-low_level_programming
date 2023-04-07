
#include "main.h"
/**
 *set_bit - set the bit
 *@n: n
 *@index: index of numbers
 *Return: success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n |= 1 << index;
	return (1);
}
