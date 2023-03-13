#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Short description, single line
 * @str: Description of parameter x
 * Return: char
 */
char *_strdup(char *str)
{
	int i = 0;
	char *tableau;
	int k = 0;

	for (; str[i] != '\0'; i++)
	{
	}
	tableau = malloc(i * sizeof(char) + 1);
	if (tableau == 0 || str == NULL)
	{
		return (NULL);
	}
	for (; k < i; k++)
	{
		tableau[k] = str[k];
	}
	return (tableau);
}
