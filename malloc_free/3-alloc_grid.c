#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Short description, single line
 * @width: Description of parameter x
 * @height: second char
 * Return: ints
 */
int **alloc_grid(int width, int height)
{
	int **tableau;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	tableau = malloc(height * sizeof(int *));
	if (tableau == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		tableau[i] = malloc(width * sizeof(int));
		if (tableau[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(tableau[j]);
			}
			free(tableau);
			return (NULL);
		}
	}
	return (tableau);
}
