#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Short description, single line
 * @size: Description of parameter x
 * @c: Description of the returned value
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *tableau;
	unsigned int i;

	tableau = malloc(size * sizeof(char));
	if (tableau == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		tableau[i] = c;
	}
	return (tableau);
}
