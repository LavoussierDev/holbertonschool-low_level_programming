#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers 1-98
 *
 * @n: input of digits
 *
 * Return: void
 */

void print_to_98(int n)
{
	printf("%d, ", n);

	while (n != 98)
	{
		if (n > 98)
		{
			n--;
		}
		else if (n < 98)
		{
			n++;
		}

		if (n != 98)
		{
			printf(", ");
		}
		printf("%d, ", n);
	}
	printf("\n");
}
