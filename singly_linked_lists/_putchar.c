#include "lists.h"

/**
 * _putchar - prints out a character
 * @c: input of given character
 *
 * Return: a char to stdout stream
 */

int _puthcar(char c)
{
	return (write(1, &c, 1));
}


