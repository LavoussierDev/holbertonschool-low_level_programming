#include "main.h"

/**
 * jack_bauer - prints out a loop
 * of a 24 hour timer in mins
 *
 * Return: Results
 */

void jack_bauer(void)
{
	int hour, mins;

	for (hour = 0; hour < 24; hour++)
	{
		for (mins = 0; mins < 60; mins++)
		{
		_putchar((hour / 10) + '0');
		_putchar((hour % 10) + '0');
		_putchar(':');
		_putchar((mins / 10) + '0');
		_putchar((mins % 10) + '0');
		_putchar('\n');
		}
	}
}

