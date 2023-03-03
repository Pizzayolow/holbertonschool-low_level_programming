#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strstr- Writee leing to uppercase
 * @haystack: the string in main fonction
 * @needle: the char we must found
 * Return: the string to copy
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i;
	unsigned int k;

	for (i = 0; i < 8; i++)
	{
		for (k = 0; k < 8; k++)
		{
			printf("%c", a[i][k]);
		}
		printf("\n");
	}
}
