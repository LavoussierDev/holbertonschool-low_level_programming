#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: the source
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y;
	unsigned int count = 0;

	for (x = 0; s[x] != '\0' && s[x] != ' '; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				count++;
				break;
			}
		}
	}

	return (count);
}

