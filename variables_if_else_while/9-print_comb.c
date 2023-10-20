#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible
 * single digits combinations
 *
 * Return: Always 0
 */

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);

		if (x != '9')
	{
		putchar(',');
	}
		if (x != '9')
		{
			putchar(' ');
		}
	}
		putchar('\n');
	return (0);
}
