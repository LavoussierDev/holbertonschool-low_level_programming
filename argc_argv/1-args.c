#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
	}
	printf("%d\n", x - 1);
	return (0);
}
