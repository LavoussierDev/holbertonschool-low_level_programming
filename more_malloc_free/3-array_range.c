#include "main.h"

/**
 * array_range - create an array of integers
 * @min: min value to put in array
 * @max: max value to put in array
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *y, x, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	y = malloc(sizeof(int) * size);

	if (y == NULL)
	{
		return (NULL);
	}

    for (x = 0; x < size; x++)
	{
		y[x] = min++;
	}

	return (y);
}
