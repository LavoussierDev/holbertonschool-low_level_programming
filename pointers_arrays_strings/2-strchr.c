#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: input (the string)
 * @c: input (searches for character)
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int x = 0;

	while (*(s + x) != '\0')
	{
		if (*(s + x) == c)
		{
			return (s + x);
		}

		x++;
	}
	if (c == '\0')
	{
		return (s + x);
	}
	return (NULL);
}
