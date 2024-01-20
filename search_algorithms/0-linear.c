#include "search_algos.h"

/**
 * linear_search -  searches for a value in an array of integers
 * using the Linear search algorithm
 *
 * @array: The Data being searched
 * @size: The Size of the array
 * @value: The Value Given to search
 * Return: The index of matching array elements
 */

int linear_search(int *arr, size_t size, int target)
{
	int index, result = -1;

	if (arr == NULL || size == 0)
		return (-1);

	for (index = 0; index < (int)size; index++)
	{
		printf("Value checked arr[%d] = [%d]\n", index, arr[index]);
		if (arr[index] == target)
		{
			result = index;
			break;
		}
	}

	return (result);
}
