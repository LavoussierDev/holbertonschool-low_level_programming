#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * & in uppercase.
 *
 * Return: Always 0
 */

int main(void)
{
	int x;
	int y;

	for (x = 'a'; x <= 'z'; x++)
{
	putchar(x);
}
	for (y = 'A'; y <= 'Z'; y++)
{
	putchar(y);
}
	putchar('\n');

	return (0);
}
