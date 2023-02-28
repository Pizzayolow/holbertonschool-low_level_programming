#include "main.h"
#include <stdio.h>
/**
 * print_array - the function who return the lenght of a string
 * @a: the char
 * @n: mmh
 * Return: the numberof charachers in this array
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (n >= 0)
	{
		while (a[i] < a[n])
		{
			printf("%d", a[i]);
			i++;

			if (a[i] != a[n])
			{
				printf(", ");
			}
		}

	}
	printf("\n");
}
