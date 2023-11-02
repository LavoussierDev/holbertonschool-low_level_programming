#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: input of characters
 */

void print_rev(char *s)
{
	int fowards, backwards;

	for (fowards = 0; s[fowards] != '\0'; fowards++)
	{
	}
	for (backwards = fowards - 1; backwards >= 0; backwards--)
	{
		_putchar(s[backwards]);
	}
	_putchar('\n');
}
