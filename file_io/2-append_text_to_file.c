#include "main.h"

/**
 * append_text_to_file - creates a file
 * @filename: name of file that will be created
 * @text_content: string to put into file
 * Return: -1 on failure & 1 on success
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	size_t len = 0;
	ssize_t x;
	ssize_t y;

	if (!text_content)
		len = 0;
	else
		for (len = 0; text_content[len] != '\0'; len++)
			;
	x = open(filename, O_WRONLY | O_APPEND, 0600);
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
