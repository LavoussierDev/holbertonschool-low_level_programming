#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new string, NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int index, length1, length2, new_length;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (length1 = 0; s1[length1]; length1++)
		;

	for (length2 = 0; s2[length2]; length2++)
		;

	new_length = length1 + length2;

	result = malloc((new_length + 1) * sizeof(char));

	for (index = 0; s1[index] != '\0'; index++)
		result[index] = s1[index];

	for (index = 0; s2[index] != '\0'; index++)
		result[length1 + index] = s2[index];

	result[new_length] = '\0';

	return (result);
}
