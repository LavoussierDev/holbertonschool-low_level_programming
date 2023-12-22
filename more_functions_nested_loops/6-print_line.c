#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: amount of times the line will be printed.
 *
 * Return: void
 */

void print_line(int n)
{
	int z;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (z = 1; z <= n; z++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
