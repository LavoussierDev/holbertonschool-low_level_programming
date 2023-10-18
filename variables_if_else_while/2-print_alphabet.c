#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints out lower case
 * alphabet.
 *
 * Return: Always 0
 */

int main()
{
	int x;
	for(x = 'a'; x <= 'z'; x++)
{
	putchar(x);
}
	putchar('\n');
	return (0);
}
