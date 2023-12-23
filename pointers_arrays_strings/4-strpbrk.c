#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string
 * @accept: comparison of chars
 * Return: pointer to the byte s mathces bytes, or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
				return (s + x);
		}
	}

	return (NULL);
}
