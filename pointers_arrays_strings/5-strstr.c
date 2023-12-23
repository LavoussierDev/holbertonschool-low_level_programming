#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search through
 * @needle: string to match
 * Return: pointer to initial segment of haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int x, y, start;
	int len = 0;

	while (needle[len] != '\0')
	{
		len++;
	}

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (y = 0, start = x; y < len && haystack[x] == needle[y]; y++, x++)
		{
			if (y == len - 1)
				return (haystack + start);
		}
	}

	return (NULL);
}
