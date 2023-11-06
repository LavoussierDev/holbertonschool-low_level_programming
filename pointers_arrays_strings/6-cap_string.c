#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: input of characters
 *
 * Return: Characters
 */

char *cap_string(char *str)
{
	int x, y, upper = 32;
	char separators[] = {',', ';', '.', '?',
	'"', '(', ')', '{', '}', ' ', '\n', '\t'};

	for (y = 0; str[y] != '\0'; y++)
	{
		if (str[y] >= 'a' && str[y] <= 'z')
		{
			str[y] = str[y] - upper;
		}

		upper = 0;
		for (x = 0; x <= 11; x++)
		{
			if (str[y] == separators[x])
			{
				x = 11;
				upper = 32;
			}
		}
	}
	return (str);
}
