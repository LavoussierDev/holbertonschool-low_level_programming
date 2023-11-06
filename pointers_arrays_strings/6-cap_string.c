#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: input of characters
 *
 * Return: Characters
 */

char *cap_string(char *str)
{
	int x = 1;

	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n' ||
		*str == ',' || *str == ';' || *str == '.' || *str == '!' ||
		*str == '?' || *str == '"' || *str == '(' || *str == ')'
		|| *str == '{' || *str == '}')
		{
			x = 1;
		}
		else if (x && ((*str >= 'a' && *str <= 'z')
					|| (*str >= 'A' && *str <= 'Z')))
		{
			if (*str >= 'a' && *str <= 'z')
			{
				*str -= ('a' - 'A');
			}
			x = 0;
		}
		str++;
	}
	return (str);
}
