#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: receives pointer
 * @src: receives pointer
 * @n: receives integer
 *
 * Return: Returns Characters
 */

char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*temp != '\0')
	{
		temp++;
	}
	while (*src != '\0' && n > 0)
	{
		*temp = *src;
		temp++;
		src++;
		n--;
	}
	*temp = '\0';

	return dest;
}
