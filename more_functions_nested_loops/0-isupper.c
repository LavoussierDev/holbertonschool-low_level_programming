#include "main.h"

/**
 * _isupper - checks for uppercase
 * characters
 * @c: input, lower or uppercase letters.
 *
 * Return: Returns (1) if uppercase,
 * if not returns (0)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
