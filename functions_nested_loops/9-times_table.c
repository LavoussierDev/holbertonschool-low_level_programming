#include "main.h"

/**
 * times_table - times table
 *
 * Return: Void
 */

void times_table(void)
{
	int x, y, mul;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			mul = x * y;
			_putchar(mul + '0');
			_putchar(mul + '0');
			_putchar(mul + '0');
			_putchar(mul + '0');
			_putchar(mul + '0');
			_putchar(mul + '0');
			_putchar(mul + '0');
			_putchar(mul + '0');
			_putchar(mul + '0');
			_putchar(mul + '0');
		}
	}
}
