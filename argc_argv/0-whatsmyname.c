#include <stdio.h>
#include "main.h"

/**
 * main - program prints it's own name.
 * @argc: amount of arguments typed
 * @argv: array points to arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *arg;

	argc = 0;
	arg = argv[argc];

	while (*arg != '\0')
	{
		_putchar(*arg);
		arg++;
	}
	_putchar('\n');
	return (0);
}
