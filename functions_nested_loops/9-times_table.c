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
			if (y == 0)
			{
				_putchar('0');
				continue;
			}
			mul = x * y;
			if (mul >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(mul / 10 + '0');
				_putchar(mul % 10 + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(mul + '0');
			}
		}
		_putchar('\n');
	}
}
