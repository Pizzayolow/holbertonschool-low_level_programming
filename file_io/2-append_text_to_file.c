#include "main.h"
/**
 * append_text_to_file - Short description, single line
 * @filename: Description of parameter x
 * @text_content: the letter
 * Return: an int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	write(fd, text_content, strlen(text_content));
	close(fd);

	return (1);

}
