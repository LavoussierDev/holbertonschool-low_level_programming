#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: pointer to a string
 * Return: length of the string s
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * _strcpy - copy string from src to dest
 * @d: destination string
 * @s: source string
 * Return: Copied string
 */
char *_strcpy(char *d, char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		d[c] = s[c];
		c++;
	}
	d[c] = '\0';
	return (d);
}

/**
 * new_dog - creates a new dog
 * @n: dog name
 * @a: dog age in years (float)
 * @o: name of dog owner
 * Return: pointer to dog_t struct
 **/
dog_t *new_dog(char *n, float a, char *o)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(1 + _strlen(n) * sizeof(char));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = _strcpy(d->name, n);

	d->age = a;

	d->owner = malloc(1 + _strlen(o) * sizeof(char));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->owner = _strcpy(d->owner, o);

	return (d);
}
