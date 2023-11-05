#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array
 * of integers
 * @a: array
 * @n: amount of said digit's to be printed
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);

		if (x < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
