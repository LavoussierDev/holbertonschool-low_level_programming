#include "main.h"

/**
 * swap_int - swaps value of
 * two integers.
 * @a: int pointer variable
 * @b: int pointer variable
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;
}
