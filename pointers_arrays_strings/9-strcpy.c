#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: pointer pointing to another pointer
 * @src: string
 *
 * Return: pointer *dest
 */

char *_strcpy(char *dest, char *src)
{
	char *x = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (x);
}
