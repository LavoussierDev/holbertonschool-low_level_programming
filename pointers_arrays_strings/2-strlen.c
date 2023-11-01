#include "main.h"

/**
 * _strlen - returns string length
 * @s: input of chars
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int x;

	for(x = 0; s[x] != '\0'; x++)
	{
		return(x);
	}
	return (0);
}

