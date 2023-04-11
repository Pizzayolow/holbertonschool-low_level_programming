#include "main.h"
/**
 * read_textfile - Short description, single line
 * @filename: Description of parameter x
 * @letters: the letter
 * Return: a string
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t rcount, writing;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	rcount = read(fd, buffer, letters);
	if (rcount == -1)
	{
		return (0);
	}
	writing = (write(1, buffer, rcount));
	if (writing == -1)
	{
		return (0);
	}
	close(fd);

	free(buffer);

	return (writing);

}
