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
			_putchar((mul * 0) + '0');
			_putchar((mul * 1) + '0');
			_putchar((mul * 2) + '0');
			_putchar((mul * 3) + '0');
			_putchar((mul * 4) + '0');
			_putchar((mul * 5) + '0');
			_putchar((mul * 6) + '0');
			_putchar((mul * 7) + '0');
			_putchar((mul * 8) + '0');
			_putchar((mul * 9) + '0');
		}
	}
}
