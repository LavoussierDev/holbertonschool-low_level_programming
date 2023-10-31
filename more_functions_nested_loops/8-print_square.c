#include "main.h"

/**
 * print_square - prints a square
 * @size: the size of the squares
 */

void print_square(int size)
{
	int square, lines;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lines = 1; lines <= size; lines++)
		{
			_putchar('#');

			for (square = 2; square <= size; square++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
