#include <stdio.h>
#include <stdlib.h>
/**
 * main - Short description, single line
 * @argc: Description of parameter x
 * @argv: parameter b
 * Return: Description of the returned value
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
