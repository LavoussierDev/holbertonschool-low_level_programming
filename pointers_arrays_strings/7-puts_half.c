#include "main.h"

/**
 * puts_half - prints second half of string
 * @str: input
 */

void puts_half(char *str)
{
	int x = 0, a, q;
	char *ptr = str;

	while (*ptr != '\0')
	{
		x++;
		ptr++;
	}

	a = (x + 1) / 2;
	for (q = a; str[q] != '\0'; q++)
	{
		_putchar(str[q]);
	}
	_putchar('\n');
}
