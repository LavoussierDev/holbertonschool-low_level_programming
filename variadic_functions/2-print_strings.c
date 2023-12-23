#include "variadic_functions.h"

/**
 * print_strings - print list of numbers, then /n
 * @separator: string to print between numbers
 * @n: number of ints to passed to function
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ls;
	unsigned int x;
	char *_string;

	va_start(ls, n);
	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			_string = va_arg(ls, char*);
			if (!_string)
				printf("(nil)");
			else
				printf("%s", _string);
			if ((x < n - 1) && (separator))
				printf("%s", separator);
		}
	}

	printf("\n");

	va_end(ls);
}
