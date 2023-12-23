#include "main.h"

/**
 * _strdup - Returns Duplicated string
 * @str: input of characters
 * Return: NULL if string NULL if not, then the chars
 */

char *_strdup(char *str)
{
	int length = 0;
	char *pointer, *duplicate_string;

	if (!str)
	{
		return (NULL);
	}

	pointer = str;
	while (*pointer++)
	{
		length++;
	}

	duplicate_string = malloc(length + 1);
	if (!duplicate_string)
	{
		return (NULL);
	}

	pointer = duplicate_string;
	while (*str)
	{
		*pointer++ = *str++;
	}

	*pointer = 0;
	return (duplicate_string);
}
