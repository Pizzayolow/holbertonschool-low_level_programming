#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Short description, single line
 * @argc: Description of parameter x
 * @argv: s
 * Return: int
 */

int main(int argc, char *argv[])
{
	int a = 0;
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = get_op_func(argv[2])(num1, num2);
	printf("%d\n", a);
	return (0);
}
