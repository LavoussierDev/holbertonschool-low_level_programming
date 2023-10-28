#include "main.h"

/**
 * _isdigit - checks for digits 0-9
 * @c: checks if a digit
 *
 * Return: booleani, true or false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
