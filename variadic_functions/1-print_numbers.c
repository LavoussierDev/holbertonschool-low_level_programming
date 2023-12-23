#include "variadic_functions.h"

/**
 * print_numbers - print list of numbers, then /n
 * @separator: string to print between numbers
 * @n: number of ints to passed to function
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ls;
	unsigned int x;

	va_start(ls, n);
	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			printf("%d", va_arg(ls, int));
			if ((x < n - 1) && (separator))
				printf("%s", separator);
		}
	}

	printf("\n");

	va_end(ls);
}
