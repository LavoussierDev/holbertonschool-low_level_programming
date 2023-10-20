#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  prints base 16
 * numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
