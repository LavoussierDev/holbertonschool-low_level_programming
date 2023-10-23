#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet
 * 10 times.
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int y = 0;

	while (y < 10)
	{
		int z = 'a';

		while (z <= 'z')
		{
			_putchar(z);
			z++;
		}
		_putchar('\n');
		y++;
	}
}
