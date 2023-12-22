#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size varies depending input
 * of digits.
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			if (y < size + 1 - x)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}

