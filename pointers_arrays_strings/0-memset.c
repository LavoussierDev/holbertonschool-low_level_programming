#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: bytes of memory
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *tmp;
	unsigned int x;

	tmp = s;

	for (x = 0; x < n; x++)
	{
		*(s + x) = b;
	}
	return (tmp);
}
