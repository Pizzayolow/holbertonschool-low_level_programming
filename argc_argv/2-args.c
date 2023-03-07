#include <stdio.h>
/**
 * main - Short description, single line
 * @argc: Description of parameter x
 * @argv: parameter b
 * Return: Description of the returned value
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
