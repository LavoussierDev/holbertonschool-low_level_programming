#include <stdio.h>
#include <stdlib.h>

/**
 * main - FizzBuzz Solution
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (!(x % 3 == 0 || x % 5 == 0))
		{
			printf("%d", x);
		}
		else
		{
			if ((x % 3 == 0) && (x % 5 != 0))
			{
				printf("Fizz");
			}
			else if ((x % 3 != 0) && (x % 5 == 0))
			{
				printf("Buzz");
			}
			else
			{
				printf("FizzBuzz");
			}
		}
		if (x < 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
