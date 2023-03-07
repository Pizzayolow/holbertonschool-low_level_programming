#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Short description, single line
 * @argc: Description of parameter x
 * @argv: parameter b
 * Return: Description of the returned value
 */
int main(int argc, char *argv[])
{
	int i;
	int k;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (k = 0; argv[i][k]; k++)
		{
			if (!isdigit(argv[i][k]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
