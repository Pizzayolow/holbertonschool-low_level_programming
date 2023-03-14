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
	int **grid = NULL;
	int i;
	int j;
	int b;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof (int) * width);
		if (grid[i] == NULL)
		{
			for (b = i; b >= 0; b--)
			{
				free(grid[b]);
			}
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
return (grid);
}
