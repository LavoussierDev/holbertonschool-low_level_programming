#include "main.h"

/**
 * div - verifies if given integer n is a prime number
 * @n: given integer
 * @x: verifies if integer is a divisor
 *
 * Return: checks if it's a prime number.
 */

int div(int n, int x)
{
	if (n < 2)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else if (x * x > n)
	{
		return (1);
	}
	else if (n % x == 0)
	{
		return (0);
	}
	return (div(n, x + 1));
}

/**
 * is_prime_number -  validates if integer is a prime number
 * @n: input of given integers
 *
 * Return: 1 if prime, 0 if not.
 */

int is_prime_number(int n)
{
	return (div(n, 2));
}
