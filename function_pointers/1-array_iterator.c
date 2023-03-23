#include <stdio.h>

/**
  * array_iterator - executes a function given as a parameter on each element.
  * @array: array of integer elements.
  * @size: size of the array.
  * @action: pointer to the function to execute
  *
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
