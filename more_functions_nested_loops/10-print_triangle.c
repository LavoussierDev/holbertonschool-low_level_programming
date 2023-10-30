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
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			_putchar(' ');
			for (y = 0; y < x; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
