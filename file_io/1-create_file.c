#include "main.h"
/**
 * create_file - Short description, single line
 * @filename: Description of parameter x
 * @text_content: the letter
 * Return: an int
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
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
