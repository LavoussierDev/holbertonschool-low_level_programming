#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input of characters
 */

void rev_string(char *s)
{
	int x = 0, a, z;
	char temp;

	while (s[x] != '\0')
	{
		x++;
	}
	for (a = 0, z = x - 1; a < z; a++, z--)
	{
		temp = s[a];
		s[a] = s[z];
		s[z] = temp;
	}
}

