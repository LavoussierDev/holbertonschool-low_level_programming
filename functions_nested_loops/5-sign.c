#include "main.h"

/**
 * print_sign - prints sign of digits
 * either positive or negative
 *
 * @n: input of digits
 *
 * Return: Results
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
