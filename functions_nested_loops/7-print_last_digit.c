#include "main.h"

/**
 * print_last_digit - prints last digit
 * of a number.
 *
 * @n: variable input
 * @ld: Last digit
 *
 * Return: results
 */

int print_last_digit(int x)
{
	int ld = (x % 10);

	if (ld < 0)
	{
		ld = ld * -1;
	}
	_putchar('0' + ld);

	return (ld);
}

