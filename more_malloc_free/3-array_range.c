#include "main.h"

/**
 * *array_range - make  memory for an array
 * @min: int type
 * @max: int type
 * Return:  return pointer to array
 */

int *array_range(int min, int max)
{
	int *pointer;
	int vector;

	if (min > max)
	{
		return (NULL);
	}

	pointer = malloc(sizeof(int) * (max - min + 1));
	if (pointer == NULL)
	{
		return (NULL);
	}
	vector = 0;
	while (min <= max)
	{
		pointer[vector] = min;
		min++;
		vector++;
	}
	return (pointer);
}
