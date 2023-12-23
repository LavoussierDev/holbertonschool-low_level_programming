#include "variadic_functions.h"

/**
 * sum_them_all - sum a variable size list of ints
 * @n: represents the number of ints to follow ...
 * Return: sum of ints passed int
 **/

int sum_them_all(const unsigned int n, ...)
{
	va_list ls;
	int result = 0;
	unsigned int x;

	va_start(ls, n);
	if (n == 0)
		return (0);

	for (x = 0; x < n; x++)
	{
		result += va_arg(ls, int);
	}

	va_end(ls);
	return (result);
}
