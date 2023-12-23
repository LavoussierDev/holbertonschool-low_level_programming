#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to a char
 * Return: int representing the length of the string s
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * @n: characters of the second string
 * Return: allocated memory, NULL is returned on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, a, b, c;
	char *r;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = _strlen(s1);
	b = _strlen(s2);

	if (n < b)
		b = n;

	c = a + b;

	r = malloc((c + 1) * sizeof(char));
	if (r == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		r[i] = s1[i];

	for (i = 0; i < b; i++)
		r[a + i] = s2[i];

	r[c] = '\0';

	return (r);
}
