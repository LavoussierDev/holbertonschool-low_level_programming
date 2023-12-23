#include "main.h"

/**
 * _strlen - returns length of a string
 * @str: string to be tested for length
 * Return: length of string
 **/
int _strlen(char *str)
{
	int x;

	for (x = 0; str[x]; x++)
		;
	return (x);
}

/**
 * argstostr - concatenate all args to program
 * @ac: number of args to program
 * @av: arguments to main = array of strings
 * Return: one big string of concatenated args, with newlines built in to str
 */
char *argstostr(int ac, char **av)
{
	char *result;
	int x, y, z = 0, total_length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
		total_length += _strlen(av[x]) + 1;
	total_length += 1;

	result = malloc(sizeof(char) * total_length);
	if (result == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			result[z] = av[x][y];
			z++;
		}
		result[z] = '\n';
		z++;
	}
	result[z] = '\0';

	return (result);
}
