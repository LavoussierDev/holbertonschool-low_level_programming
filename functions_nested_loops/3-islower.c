#include "main.h"

/**
 * _islower - checks lowercase characters
 *
 * @c: input of characters
 *
 * Return: Always 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
