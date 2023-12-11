#include "main.h"

/**
 * read_textfile - output contents of text file to STDOUT
 * @filename: string name of file.
 * @letters: length of file in chars
 * Return: number of chars
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x;
	ssize_t y = 0, n2;
	char *z;

	if (!filename)
		return (0);
	x = open(filename, O_RDONLY);
	if (x == -1)
	{
		return (0);
	}
	z = malloc(sizeof(char) * (letters + 1));
	if (!z)
	{
		close(x);
		return (0);
	}
	y = read(x, z, letters);
	if (y == -1)
	{
		free(z);
		close(x);
		return (0);
	}
	z[y] = '\0';
	n2 = write(STDOUT_FILENO, z, y);
	if (n2 == -1)
	{
		close(x);
		free(z);
		return (0);
	}
	if (close(x) < 0)
	{
		free(z);
		return (0);
	}
	free(z);
	return (y);
}

