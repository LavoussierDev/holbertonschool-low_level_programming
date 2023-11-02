#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input of characters
 */

void rev_string(char *s)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		_putchar(x);
	}
	for (y = x - 1; y >= '\0'; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}

