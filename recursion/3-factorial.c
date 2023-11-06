#include "main.h"

/**
 * factorial - returns factorial of given number
 * @n: input of digits
 *
 * Return: Digit(s)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
