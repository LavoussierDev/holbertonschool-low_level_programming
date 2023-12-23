#include "main.h"

/**
 * print_diagsums - prints the sums of the two diagonals
 * @a: The array
 * @size: The size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int x = 0, y = 0, z;

	for (z = 0; z < size; z++)
	{
		x += a[z * size + z];
		y += a[(z + 1) * (size - 1)];
	}

	printf("%d, %d\n", x, y);
}

