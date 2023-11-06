#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: arguments
 * @argv: arrays pointing to the arguemnts
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, y, sum;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;
	for (x = 1; x < argc; x++)
	{
		y = 0;
		while (argv[x][y] != '\0')
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
			y++;
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);

	return (0);
}
