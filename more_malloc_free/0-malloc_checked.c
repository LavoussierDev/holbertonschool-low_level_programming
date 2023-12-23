#include "main.h"

/**
 * malloc_checked - allocate memory
 * @b: Amount of bytes to allocate
 *  Return: pointer to allocated memory or 98 if malloc is unsuccesful
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
