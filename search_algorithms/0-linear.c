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
    size_t index = 0;

    if (arr == NULL)
        return -1;

    for (index = 0; index < size; index++)
	{
        printf("Value checked arr[%lu] = [%d]\n", index, arr[index]);
        if (arr[index] == target)
            return (int)index;
    }

    return -1;
}
