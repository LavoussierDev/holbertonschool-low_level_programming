#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: receives character
 * @src: receives character
 * @n: receives character
 *
 * Return: Character
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*src != '\0' && n > 0)
	{
		*temp = *src;
		temp++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*temp = '\0';
		temp++;
		n--;
	}
	return (dest);
}
