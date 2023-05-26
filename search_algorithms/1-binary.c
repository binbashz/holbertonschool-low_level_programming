#include "search_algos.h"

/**
  * binary_search - Performs binary search on a sorted array of integers.
  * @arr: Pointer to the first element of the array to search.
  * @size: Number of elements in the array.
  * @target: The value to search for.
  *
  * Return: The index of the target value if found, otherwise -1.
  *
  * Prints the current subarray being searched after each iteration.
  */

int binary_search(int *arr, size_t size, int target)
{
	size_t left, right, middle;

	if (arr == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (right >= left)
	{
		printf("Searching subarray: ");
		for (middle = left; middle < right; middle++)
			printf("%d, ", arr[middle]);
		printf("%d\n", arr[middle]);

		middle = left + (right - left) / 2;

		if (arr[middle] == target)
			return (middle);

		if (arr[middle] > target)
			right = middle - 1;
		else
			left = middle + 1;
	}

	return (-1);
}
