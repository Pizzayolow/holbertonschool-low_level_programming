#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char **argv)
{
	int n;
	char buffer[1024];

	(void) argc;
	int file_from;
	int file_to;

	file_from = open(argv[1], O_RDONLY, 664);
	file_to = open(argv[2], O_WRONLY, 664);
		
	if (n == -1)
	{
		return (0);
	}
	while ((n = read(file_from, buffer, 1024)) != 0)
	{
		write(1, buffer, n);
		write(file_to, buffer, n);
	}
	close(file_from);
	close(file_to);
	return (0);
}
