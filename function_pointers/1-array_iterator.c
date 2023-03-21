#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Short description, single line
 * @array: Description of parameter x
 * @size: s
 * @action: s
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
