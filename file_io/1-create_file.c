#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file that will be created
 * @text_content: file recieves a string
 * Return: -1 on failure & 1 on success
 **/
int create_file(const char *filename, char *text_content)
{
	size_t len = 0;
	ssize_t x;
	ssize_t y;

	if (text_content == NULL)
		len = 0;
	else
		for (len = 0; text_content[len] != '\0'; len++)
			;
	x = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (x < 0)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	y = write(x, text_content, len);
	if (y < 0)
		return (-1);
	if (close(x) < 0)
		return (-1);
	return (1);
}
