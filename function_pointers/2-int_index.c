#include"function_pointers.h"
#include<stdio.h>
#include <stddef.h>
/**
  * int_index - search intergers on array.
  * @array: pointer to array.
  * @size: size of array.
  * @cmp: function to search intergers.
  * Return: index wich cmp found intergers.
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	 int i;

	if (array && cmp && size > 0)
{
	for (i = 0; i < size; i++)
{
	if (cmp(array[i]) != 0)
{
	return (i);
	}
		}
}
	return (-1);
	}
