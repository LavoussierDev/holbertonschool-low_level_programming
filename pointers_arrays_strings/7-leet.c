#include "main.h"

/**
 * leet - converts string
 * @s: string to be converted
 * Return: pointer to string that is converted
 */

char *leet(char *s)
{
	int x, y;
	char *ch = "aeotlAEOTL";
	char *leet = "4307143071";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (s[x] == ch[y])
			{
				s[x] = leet[y];
				break;
			}
		}
	}

	return (s);
}
