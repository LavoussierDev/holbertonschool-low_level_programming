#include "main.h"

/**
 * _pow_recursion - returns value of x raised to the power of y
 * @x: value one
 * @y: value two
 *
 * Return: Output of a combination of two values
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
