#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Short description, single line
 * @array: Description of parameter x
 * @size: s
 * @cmp: s
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
