#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer which takes input
 */

void puts2(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x += 2;
	}
	_putchar('\n');
}
