#include "main.h"
#include <stdio.h>
/**
 * string_toupper- Writee leing to uppercase
 * @tableau: array
 * Return: the string to copy
 */

char *string_toupper(char *tableau)
{
	int s = 0;

	while (tableau[s] != '\0')
	{
		if (tableau[s] > 'a' && tableau[s] < 'z')
		{
			tableau[s] = tableau[s] - ('a' - 'A');
		}
		s++;
	}
	return (tableau);
}
