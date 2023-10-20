#include <stdio.h>

/**
 * main - Prints alphabet
 * backwards.
 *
 * Return: Always return 0
 */

int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
