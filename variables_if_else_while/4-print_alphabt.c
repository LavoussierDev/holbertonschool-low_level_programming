#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * with restrictions.
 *
 * Return: Always 0
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'q' && x != 'e')
		{
			putchar(x);
		}
	}
	putchar('\n');

	return (0);
}
