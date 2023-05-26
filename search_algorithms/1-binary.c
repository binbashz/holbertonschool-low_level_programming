
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
	int low = 0, high = size - 1, mid, i;

	if (arr == NULL)
	{
		return (-1);
	}

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", arr[i]);
			if (i < high)
			{
				printf(", ");
			}
		}
		printf("\n");
		if (arr[mid] == target)
		{
			return (mid);
		}
		else if (arr[mid] < target)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
