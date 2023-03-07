#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: what will be copied
 * @n: the amount to be copied
 *
 * Return: to the initial position
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *ctrlx = dest;	/*copies the memory*/

	for (; i < n; i++)
		ctrlx[i] = src[i];	/*copy constants*/
	return (dest);
}
