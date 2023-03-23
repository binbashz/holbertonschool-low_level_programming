#include <stddef.h>

/**
  * array_iterator - executes a function given as a parameter on each element.
  * @array: array of integer elements.
  * @size: size of the array.
  * @action: pointer to the function to execute
  *
  */

void array_iterator(int *array, size_t size, void (*action)(int))
	{
	for (size_t i = 0; i < size; i++) /* iterar sobre cada elemento del arreglo */
	{
	action(array[i]); /* llamar la función "action" sobre el elemento actual*/
}

	}
