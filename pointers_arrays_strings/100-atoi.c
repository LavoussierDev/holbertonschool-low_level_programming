#include "main.h"

/**
 * _atoi - converts a string into an integer
 * @s: input of characters
 *
 * Return: 0
 */

int _atoi(char *s)
{
	int x = 1, z = 0;
	unsigned int y = 0;

	while (*s != '\0')
	{
		if (*s == '-' && !z)
		{
			x *= -1;
			z = 1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			y = (y * 10) + (*s - '0');
			z = 1;
		}
		else if (y > 0)
		{
			z = 1;
		}
		s++;
	}
	return (y * x);
}

