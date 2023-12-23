#include "main.h"

/**
 * _calloc - allocate memory for an array
 * @n: elements of array to be created
 * @s: element size
 * Return: pointer to array, or NULL if it fails
 */
void *_calloc(unsigned int n, unsigned int s)
{
	char *x;
	unsigned int y;

	if (n == 0 || s == 0)
		return (NULL);

	x = malloc(n * s);

	if (x == NULL)
		return (NULL);

	for (y = 0; y < s * n; y++)
		x[y] = '\0';

	return ((void *)x);
}
