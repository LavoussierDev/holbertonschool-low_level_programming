#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name ...
 * @name: persons name
 * @f: Equaled to Null
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	(*f)(name);
}
