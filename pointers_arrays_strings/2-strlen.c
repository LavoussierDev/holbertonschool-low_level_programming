#include "main.h"

/**
 * _strlen - returns string length
 * @s: input of chars
 *
 * Return: outputs counted results,
 * of a string or character.
 */

int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

