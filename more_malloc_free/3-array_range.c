#include <stdlib.h>
#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * array_range - function
 *
 * @min : parameter
 * @max : parameter 2
 * Return: q;dfuksghlisdrkfg
 */
int *array_range(int min, int max)
{
	int *tableau = NULL;
	int i = 0;

	tableau = malloc(sizeof(int) * max);
	if (tableau == NULL)
	{
		return (NULL);
	}
	if (min > max)
	{
		return (NULL);
	}
	for (i = 0; min < max; i++, min++)
	{
		tableau[i] = min;
	}
	return (tableau);
}
