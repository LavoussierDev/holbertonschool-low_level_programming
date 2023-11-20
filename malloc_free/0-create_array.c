#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of of the memory to print
 * @c: input of characters
 *
 * Return: Characters/String
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *array;

	array = (char*) malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	if (size != 0)
	{
		for (x = 0; x < size; x++)
		{
			*(array + x) = c;
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}
