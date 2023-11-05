#include "main.h"

/**
 * reverse_array - reverses arrays
 * @a: receives character
 * @n: receives character
 *
 */

void reverse_array(int *a, int n)
{
	int x = 0;
	int z = n - 1;
	int temp;

	while (x < z)
	{
		temp = a[x];
		a[x] = a[z];
		a[z] = temp;
		x++;
		z--;
	}
}
