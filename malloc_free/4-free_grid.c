#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Short description, single line
 * @grid: Description of parameter x
 * @height: second char
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
