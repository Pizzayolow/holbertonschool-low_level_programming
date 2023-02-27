#include "main.h"
/**
 * _strlen - the function who return the lenght of a string
 * @s: the char
 * Return: the numberof charachers in this array
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
