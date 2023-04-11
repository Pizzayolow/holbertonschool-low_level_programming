#include "main.h"
/**
 * main - Short description, single line
 * @argc: Description of parameter x
 * @argv: the letter
 * Return: an int
 */
int main(int argc, char **argv)
{
	int n = 0, file_from, file_to;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write from file %s\n", argv[2]);
		return (98);
	}
	while ((n = read(file_from, buffer, 1024)) != 0)
	{
		if (n == -1)
		{
			return (0);
		}
		write(file_to, buffer, n);
	}
	if (close(file_from) == -1)
	{
		dprintf(2, "Error: Can't close from file %d\n", file_from);
		return (100);
	}
	if (close(file_to) == -1)
	{
		dprintf(2, "Error: Can't close from file %d\n", file_to);
		return (100);
	}
	return (0);
}


