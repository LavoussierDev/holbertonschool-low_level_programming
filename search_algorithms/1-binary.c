#include "search_algos.h"

/**
 * print_subarray - prints a subarray
 * @arr: pointer to array
 * @f: index of first element to print
 * @l: index of last element to print
 */
void print_subarray(int *arr, size_t f, size_t l)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = f; i < l; i++)
		printf("%d, ", arr[i]);
	printf("%d\n", arr[i]);
}

/**
 * binary_search - searches for value in an array using Binary search
 * @arr: pointer to int array
 * @s: size of array
 * @v: value to find
 * Return: index of first match or -1 if not found
 */
int binary_search(int *arr, size_t s, int v)
{
	size_t f = 0;
	size_t l = 0;
	size_t m = 0;

	if (arr == NULL || s == 0)
		return -1;

	l = s - 1;

	while (f <= l)
	{
		print_subarray(arr, f, l);
		m = (f + l) / 2;
		if (arr[m] > v)
			l = m - 1;
		else if (arr[m] < v)
			f = m + 1;
		else
			return (int)m;
	}

	return -1;
}
