#include "main.h"
/**
 * main - Short description, single line
 * @argc: Description of parameter x
 * @argv: the letter
 * Return: an int
 */
int main(int argc, char **argv)
{
	int n = 0;
	char buffer[1024];
	int file_from;
	int file_to;

	(void) argc;
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY, 664);
	file_to = open(argv[2], O_WRONLY | O_CREAT, 664);

	while ((n = read(file_from, buffer, 1024)) != 0)
	{
		if (n == -1)
		{
			return (0);
		}
		write(1, buffer, n);
		write(file_to, buffer, n);
	}
	close(file_from);
	close(file_to);
	return (0);
}
