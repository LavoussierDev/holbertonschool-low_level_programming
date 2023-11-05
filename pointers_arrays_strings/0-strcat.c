#include "main.h"

/**
 * _strcat - concatenates the string
 * @dest:
 * @char:
 *
 * Return: Characters
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*temp != '\0')
	{
		temp++;
    }
	while (*src != '\0')
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = '\0';

	return dest;
}
