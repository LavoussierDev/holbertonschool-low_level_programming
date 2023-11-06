#include "main.h"

/**
 * _sqrt -  *
 * @n: input of given int
 * @root: given number to find sqrt
 *
 * Return: sqrt of n or -1
 */

int _sqrt(int n, int root)
{
	if (root * root == n)
	{
		return (root);
	}
	else if (root * root > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, root + 1));
	}
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: integer to find sqrt
 *
 * Return: Square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 0));
}
