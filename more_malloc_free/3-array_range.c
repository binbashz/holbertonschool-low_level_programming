#include "main.h"
#include <stdlib.h>


/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to array of integers
 **/

	int *array_range(int min, int max)
	{

	/* verify if min is greater than max */
	if (min > max)
	{
	return (NULL);
	/* if so return a null pointer */
	}
	/* allocates memory for array of integers */
	int *arr = (int *) malloc((max - min + 1) * sizeof(int));

	/* verifies if the assignment was successful */
	if (arr == NULL)
	{
	return (NULL);
	}
	for (int i = 0; i <= max - min; i++)
	/* asssignment the values to the int array */
	{
		arr[i] = min + i;
	}
	return (arr);
	}
