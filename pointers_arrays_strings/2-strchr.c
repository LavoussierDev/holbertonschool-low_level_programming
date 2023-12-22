#include "main.h"

/**
 * _strchr - Entry point
 * @s: an input
 * @c: another input
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] > '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}

	return (NULL);
}
