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
	size_t left, right, mid;

	if (arr == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (right >= left)
	{
		printf("Searching subarray: ");
		for (mid = left; mid < right; mid++)
			printf("%d, ", arr[mid]);
		printf("%d\n", arr[mid]);

		mid = left + (right - left) / 2;

		if (arr[mid] == target)
			return (mid);

		if (arr[mid] > target)
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}
