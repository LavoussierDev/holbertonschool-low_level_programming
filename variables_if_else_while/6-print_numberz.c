#include <stdio.h>

/**
 * main - prints digits 0-10
 *
 * Return: always 0
 */

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
	putchar(x);
	}
	putchar('\n');

	return (0);
}
